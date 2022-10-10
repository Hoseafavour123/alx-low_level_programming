#ifndef STRUCT_DOG_H
#define STRUCT_DOG_H

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
	int age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

