#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog (dog_t), NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    /* Calculate the lengths of the name and owner strings */
    size_t name_len = strlen(name);
    size_t owner_len = strlen(owner);

    /* Allocate memory for the new dog struct */
    dog_t *new_dog_ptr = malloc(sizeof(dog_t));
    if (new_dog_ptr == NULL)
        return NULL;

    /* Allocate memory for the name and owner strings */
    new_dog_ptr->name = malloc(name_len + 1); /* +1 for the null-terminator */
    new_dog_ptr->owner = malloc(owner_len + 1);

    /* Check if memory allocation was successful */
    if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL) {
        free(new_dog_ptr->name);
        free(new_dog_ptr->owner);
        free(new_dog_ptr);
        return NULL;
    }

    /* Copy the name and owner strings to the new memory locations */
    strcpy(new_dog_ptr->name, name);
    strcpy(new_dog_ptr->owner, owner);

    /* Assign the age */
    new_dog_ptr->age = age;

    /* Return the pointer to the new dog */
    return new_dog_ptr;
}
