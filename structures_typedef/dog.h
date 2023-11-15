#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a structure with information about a dog
 * Description: Define a new type struct 'dog'
 * @name: char *
 * @age: float
 * @owner: char *
 */

/*
 * Définition de la structure
 * Boîte qui stock plusieurs variables de différent Data types
 * Une sorte de template qui indique comment stocker les données

 struct dog
 {
 char *name;
 float age;
 char *owner;
 };
 */

/*
 * Ex3 : dog.h
 * On va utiliser typedef pour renommer/créer un alias de notre struc dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/*
 * Ex : 1-init_dog.c
 * Fonction qui va permettre de passer/initialiser des valeurs aux membres
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/*
 * Ex : 2-print_dog.c
 * Fonction qui va afficher les valeurs passer aux membre de notre structure
 */
void print_dog(struct dog *d);

/*
 * Ex : 4-new_dog.c
 * Fonction
 */
dog_t *new_dog(char *name, float age, char *owner);

/*
 * Ex : 5-free_dog.c
 * Fonction
 */
void free_dog(dog_t *d);

#endif
