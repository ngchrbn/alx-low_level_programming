#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string parameter input
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; ++s)
		++counter;

	return (counter);
}


/**
 * new_dog - creates a new dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 * Return: NULL if it fails, otherwise pointer to new dog.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;
	int i, j;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new_owner == NULL)
	{
		free(new_dog);
		free(new_name);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		new_name[i] = name[i];
	new_name[i] = '\0';

	for (j = 0; owner[j] != '\0'; j++)
		new_owner[j] = owner[j];
	new_owner[j] = '\0';

	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);
}
