#include <stdlib.h>
#include "dog.h"

/**
* free_dog - free dogs function
* @d: pointer of struct type dog
*/

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
