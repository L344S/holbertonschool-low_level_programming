#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file to append to.
 * @text_content: The text to add at the end of the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor; /* Entier utilisé pour stocker le file descriptor */
	ssize_t nb_write, length; /* int nob de lettre écrite & longueur du texte */

	if (filename == NULL) /* ERR : Si le nom du fichier est NULL */
		return (-1); /* On retourne -1 */

	/* Ouverture du fichier en écriture (ajout à la fin) */
	/* et stockage du file descriptor dans file_descriptor */
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1) /* ERR : si l'ouverture échoue */
		return (-1);

	if (text_content == NULL) /* Si le texte est NULL */
	{
		close(file_descriptor); /* on ferme le fichier */
		return (1); /* on retourne 1 */
	}

	/* Calcul de la longueur du texte à ajouter */
	length = _strlen(text_content);

	/* Ecriture du texte à la fin du fichier */
	/* et stockage du nombre de caractères écrits dans nb_write */
	nb_write = write(file_descriptor, text_content, length);
	if (nb_write == -1) /* ERR : si l'écriture échoue */
	{
		close(file_descriptor); /* on ferme le fichier */
		return (-1); /* on retourne -1 */
	}

	close(file_descriptor); /* Fermeture du fichier */
	return (1); /* On retourne 1 en cas de succès */
}
