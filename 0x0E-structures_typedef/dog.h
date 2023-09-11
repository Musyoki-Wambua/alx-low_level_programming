#ifndef DOG_H 
#define DOG_H 

#include <stdio.h>

struct dog
{
    /* data */
    char *name;
    float *age;
    char *owner;
};

typedef struct dog dog_t;

void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *strcpy(char *dest, char *src);
int _strlen(char *s);

#endif /*DOG_H*/
