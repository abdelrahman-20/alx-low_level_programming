#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A Dog Struct
 * @name: ...
 * @age: ....
 * @owner: ..
 *
 * Describtion: ...
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
