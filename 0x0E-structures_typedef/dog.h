#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents information about a dog
 * @name: Pointer to a string representing the dog's name
 * @age: Float value representing the dog's age
 * @owner: Pointer to a string representing the dog's owner
 *
 * Description: This structure contains information about a dog,
 * including its name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
