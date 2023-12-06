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
	int file_descriptor, lenght;

	if (filename == NULL) /* ERR : Si le nom du fichier est NULL */
		return (-1); /* On retourne -1 */

	if (text_content == NULL)
		text_content = "";

	/* Calcul de la longueur du texte à ajouter */
	for (lenght = 0; text_content[lenght]; lenght++)
	;

	/* Ouverture du fichier en écriture seulement avec les perm r et w*/
	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	if (file_descriptor == -1) /* ERR : si l'ouverture échoue */
		return (-1);

	/* Écriture du contenu dans le fichier */
	write(file_descriptor, text_content, lenght);

	close(file_descriptor); /* Fermeture du fichier */

	return (1); /* On retourne 1 pour indiquer le succès */
}
