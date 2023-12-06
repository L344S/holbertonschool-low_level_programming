#include "main.h"
/**
* create_file - Creates a file and writes text content to it
* @filename: The name of the file to create
* @text_content: The text content to write to the file
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	/* sert à stocker le file descriptor, longueur et le nb de lettres écrites*/
	int file_descriptor, lenght, write_count = 0;
	mode_t permission =  S_IRUSR | S_IWUSR; /* Permission du fichier créé */

	if (filename == NULL) /* ERR : Si le nom du fichier est NULL */
		return (-1); /* On retourne -1 */

	/* Ouverture du fichier en écriture seulement avec les perm r et w*/
	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, permission);

	if (file_descriptor == -1) /* ERR : si l'ouverture échoue */
		return (-1);

	/* Calcul de la longueur du texte à ajouter */
	for (lenght = 0; text_content[lenght]; lenght++)
		;

	if (text_content != NULL) /* ERR : Si le contenu est NULL */
	{
		/* Écriture du contenu dans le fichier */
		write_count = write(file_descriptor, text_content, lenght);
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
