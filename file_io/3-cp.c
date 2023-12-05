#include "main.h"
/**
* main - copies the content of a file to another file
* @argc: The number of arguments passed
* @argv: The arguments passed
* Return: Always 0 (Success) or error code
*/
int main(int argc, char *argv[])
{
	/* variables qui vont contenir les fd de l'original et de la copie */
	int og_file_descriptor, copy_file_descriptor;

	char buffer[1024]; /* stock tmp la data du fichier */

	ssize_t read_count, write_count; /* nb de caractères lus et écrits */

	if (argc != 3) /* Si le nombre d'arguments est incorrect */
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); /* ERR : affichage du message d'erreur et exit code 97 */
	}
	/* Ouverture du fichier original en lecture seule et stockage du fd */
	og_file_descriptor = open(argv[1], O_RDONLY);
	if (og_file_descriptor == -1) /* ERR : si l'ouverture échoue */
	{
		/* ERR : affichage du message d'erreur et exit code 98 */
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/* Ouverture du fichier copie en écriture et création s'il n'existe pas */
	copy_file_descriptor = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (copy_file_descriptor == -1) /* ERR : si l'ouverture échoue */
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99); /* ERR : affichage du message d'erreur et exit code 99 */
	}
	while ((read_count = read(og_file_descriptor, buffer, sizeof(buffer))) > 0)
	{
	write_count = write(copy_file_descriptor, buffer, read_count);
	if (write_count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	else if (write_count < read_count)
	{
		dprintf(STDERR_FILENO, "Warning: Incomplete write to %s\n", argv[2]);
	}
	}
	if (read_count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); /* ERR : affichage du message d'erreur et exit code 98 */
	}
	if (close(og_file_descriptor) == -1) /* Fermeture du fichier original */
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", og_file_descriptor);
		exit(100);
	}
	if (close(copy_file_descriptor) == -1) /* Fermeture du fichier copie */
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", copy_file_descriptor);
		exit(100);
	}
	return (0); /* On retourne 0 en cas de succès */
}
