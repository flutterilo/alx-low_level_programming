#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
* struct dog - structure name dog take name age and owner
* @name: name parmeter
* @age: age parameter
* @owner: parameter
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
