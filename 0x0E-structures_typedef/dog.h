#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defines new type with elements
 * dog_t - new name of the strct dog
 * @name: name parameter of the dog
 * @age: age parameter of the dog
 * @owner: name of owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
