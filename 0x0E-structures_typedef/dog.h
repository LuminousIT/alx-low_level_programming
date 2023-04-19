#ifndef MYHEADER
#define MYHEADER

/**
 * struct dog - Define a new type struct dog
 * @name: char member
 * @age: float member
 * @owner: char member
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

typedef struct dog dog_t;

#endif
