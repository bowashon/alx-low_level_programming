#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defines new type with elements
 * @name: name parameter of the dog
 * @age: age parameter of the dog
 * @owner: name of owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
