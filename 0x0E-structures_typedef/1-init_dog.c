#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function name
 * @d: function param
 * @name: function param
 * @age: function param
 * @owner: function param
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
