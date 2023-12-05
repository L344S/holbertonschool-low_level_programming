#include "main.h"

/**
* create_file - Creates a file and writes text content to it
* @filename: The name of the file to create
* @text_content: The text content to write to the file
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int file_descriptor; /* File descriptor pour le fichier créé */

	ssize_t write_count = 0; /* Nombre d'octets écrits dans le fichier */

	if (filename == NULL) /* ERR : Si le nom du fichier est NULL */
		return (-1); /* On retourne -1 */

	/* Ouverture du fichier en écriture seulement avec les perm r et w*/
	file_descriptor = open(filename, O_WRONLY | O_CREAT |
	O_TRUNC, S_IRUSR | S_IWUSR);

	if (file_descriptor == -1) /* ERR : si l'ouverture échoue */
		return (-1);

	if (text_content != NULL) /* ERR : Si le contenu est NULL */
	{
		/* Ecriture du contenu dans le fichier */
		write_count = write(file_descriptor, text_content, _strlen(text_content));
		if (write_count == -1) /* ERR : si l'écriture échoue */
		{
			close(file_descriptor); /* On ferme le fichier */
			return (-1);
		}
	}

	if (write_count == -1) /* ERR : si l'écriture échoue */
	{
		close(file_descriptor); /* On ferme le fichier */
		return (-1);
	}

	close(file_descriptor); /* Fermeture du fichier */

	return (1); /* On retourne 1 pour indiquer le succès */
}
