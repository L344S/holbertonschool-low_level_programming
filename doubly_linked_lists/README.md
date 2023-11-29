# Listes Doublement Liées

## Objectifs d'apprentissage

À la fin de ce projet, vous devriez être capable d'expliquer à n'importe qui, sans l'aide de Google :

- Ce qu'est une liste doublement liée
- Comment utiliser les listes doublement liées
- Comment chercher la bonne source d'information sans trop d'aide

## Exigences

- Les éditeurs autorisés sont : vi, vim, emacs
- Tous vos fichiers seront interprétés/compilés sur Ubuntu 20.04 LTS en utilisant python3 (version 3.8.5)
- Tous vos fichiers doivent se terminer par une nouvelle ligne
- Votre code doit utiliser le style Betty. Il sera vérifié en utilisant betty-style.pl et betty-doc.pl
- Il est interdit d'utiliser des variables globales
- Pas plus de 5 fonctions par fichier
- Les seules fonctions de la bibliothèque standard C autorisées sont malloc, free, printf et exit
- Les prototypes de toutes vos fonctions doivent être inclus dans votre fichier d'en-tête appelé lists.h
- N'oubliez pas de pousser votre fichier d'en-tête
- Tous vos fichiers d'en-tête doivent être protégés par des gardes d'inclusion

## Plus d'informations

Veuillez utiliser cette structure de données pour ce projet :

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```