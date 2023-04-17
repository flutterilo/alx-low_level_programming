#include "dog.h"
#include <stdlib.h>

/**
* init_dog - initialize dog strucutre
* @d: pointer to structure dog
* @name: name parameter
* @age: age parameter
* @owner: owner parameter
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
