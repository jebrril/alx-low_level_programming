#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Struct named dog
 * @name: Name of dog.
 * @owner: Name of owner.
 * @age: Age of the dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
