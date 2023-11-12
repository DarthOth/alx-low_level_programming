#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function name
 * @d: function param
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
