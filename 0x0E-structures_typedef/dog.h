#ifndef DOG_H
#define DOG_H

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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
