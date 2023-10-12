#include "dog.h"
#include <stdlib.h>

int find_len(char *str);
int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * find_len - Finds the length of a string.
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_len(char *str)
int _strlen(char *str)
{
	int len = 0;

@@ -25,6 +26,26 @@ int find_len(char *str)
	return (len);
}

/**
 * _strcopy - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
@@ -36,42 +57,32 @@ int find_len(char *str)
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	char *name_cpy, *owner_cpy;
	int index, name_len, owner_len;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	name_len = find_len(name);
	owner_len = find_len(owner);

	name_cpy = malloc(sizeof(char) * (name_len + 1));
	if (name_cpy == NULL)
	doggo->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}

	for (index = 0; index < name_len; index++)
		name_cpy[index] = name[index];
	name_cpy[index] = '\0';

	owner_cpy = malloc(sizeof(char) * (owner_len + 1));
	if (owner_cpy == NULL)
	doggo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggo->owner == NULL)
	{
		free(name_cpy);
		free(doggo->name);
		free(doggo);
		return (NULL);
	}

	for (index = 0; index < owner_len; index++)
		owner_cpy[index] = owner[index];
	owner_cpy[index] = '\0';

	doggo->name = name_cpy;
	doggo->name = _strcopy(doggo->name, name);
	doggo->age = age;
	doggo->owner = owner_cpy;
	doggo->owner = _strcopy(doggo->owner, owner);

	return (doggo);
}
 4 changes: 2 additions & 2 deletions4  
0x0D-structures_typedef/dog.h
@@ -1,5 +1,5 @@
#ifndef _DOG_H_
#define _DOG_H_
#ifndef DOG_H
#define DOG_H

/*
 * File: dog.h
