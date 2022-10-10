#ifndef DOG_H
#define DOG_H

/**
  * struct dog - a dog's data type
  * @name: dog name
  * @age: dog's age
  * @owner: dog's owner
  *
  * Description: this structure models a dog
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
