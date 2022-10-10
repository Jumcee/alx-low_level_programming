#ifndef MAIN_H
#define MAIN_H

/**
*struct dog - new type for dog
*@name: char meember
*@age: Float member
*@owner: char argument
*
*Description: Structured type for Dog
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;




int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
