#include "main.h"
/**
* read_textfile - Reads a text file and prints it to the POSIX standard output
* @filename: name of the file to read
* @letters: number of letters to read and print
* Return: 0 if filename is NULL
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor; /* Entier utlisé pour stocker le file descriptor */
	ssize_t nb_read, nb_write; /* int nombre de letters lu et affiché/écrit */
	char *buffer; /* Pointeur qui va stocker tmp les caractères lus du fichier */

	if (filename == NULL) /* ERR : Si le nom du fichier est NULL, on retourne 0 */
		return (0);

	/* Ouverture du fichier en lecture seule */
	/* et stockage du file descriptor dans file_descriptor */
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1) /* ERR : si l'ouverture échoue */
		return (0);

	/* Allocation de la mémoire pour le buffer de la taille du param letters */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL) /* ERR : si l'allocation échoue */
	{
		close(file_descriptor); /* on ferme le fichier */
		return (0); /* on retourne 0 */
	}
	/* Lecture du fichier et stockage du nombre de caractères lus dans nb_read */
	nb_read = read(file_descriptor, buffer, letters);
	if (nb_read == -1) /* ERR : si la lecture échoue */
	{
		free(buffer); /* on libère la mémoire allouée pour le buffer */
		close(file_descriptor); /* on ferme le fichier */
		return (0); /* on retourne 0 */
	}
	/* Ecriture du contenu du buffer dans stdout */
	/* et stockage du nombre de caractères écrits dans nb_write */
	nb_write = write(STDOUT_FILENO, buffer, nb_read);
	if (nb_write == -1 || nb_write != nb_read) /* ERR : si l'écriture échoue */
	{
		free(buffer); /* on libère la mémoire allouée pour le buffer */
		close(file_descriptor); /* on ferme le fichier */
		return (0); /* on retourne 0 */
	}
	free(buffer); /* Libération de la mémoire allouée pour le buffer */
	close(file_descriptor); /* et fermeture du fichier */
	return (nb_write); /*On return le nombre de caractères écrits dans stdout*/
}

