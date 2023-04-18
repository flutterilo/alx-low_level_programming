#include <stdlib.h>
#include "dog.h"

/**
* _strlen - string length
* @s: string pointer
* Return: return length
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
* _strcpy - copy string from src to dest
* @dest: destination parameter
* @src: source parameter
* Return: return dest
*/

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = _strlen(src);
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
* dog_t - initialize dog strucutre
* @d: pointer to structure dog
* @name: name parameter
* @age: age parameter
* @owner: owner parameter
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return NULL;
	dog->name = malloc(sizeof(char) * len1 + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * len2 + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->age = age;
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	return (dog);
}
