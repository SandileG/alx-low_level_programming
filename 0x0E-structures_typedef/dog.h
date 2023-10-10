#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure representing a dog.
 * @name: name of he dog (string).
 * @age: age of the dog (float).
 * @owner: owner of the dog (string).
 */

struct dog

{
	char *name;
	float age;
	char *owner;
};

/* FUNCTION DECLARATIONS */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif/* DOG_H */
