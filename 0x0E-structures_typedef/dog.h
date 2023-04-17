#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for dog information
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: struct containing information about a dog
 */

typedef struct dog
{
    char *name;
    float age;
    char *owner;
}