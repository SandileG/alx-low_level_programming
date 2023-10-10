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

/* New name for struct dog type */
typedef struct dog dog_t;

/* FUNCTION DECLARATIONS */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif/* DOG_H */
