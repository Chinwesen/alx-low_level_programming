#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - ID generator for Django
 * @d: dog data structure
 * Return: Always 0.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name != NULL)
		printf("Name: %s\n", (*d).name);
	else
		printf("Name: (nil)\n");
	printf("Age: %f\n", (*d).age);
	if ((*d).name != NULL)
		printf("Owner: %s\n", (*d).owner);
	else
		printf("Owner: (nil)\n");
}
