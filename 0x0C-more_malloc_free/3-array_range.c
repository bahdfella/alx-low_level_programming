#include <stdlib.h>
#include "main.h"

/**
* *array_range - creates an array of integers
* @min: minimum range of values stored
* @max: maximum range of values stored and number of elements
*
* Return: pointer to the new array
*/

int *array_range(int min, int max)

{
	int *pr;
	int k, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pr = malloc(sizeof(int) * size);

	if (pr == NULL)
		return (NULL);

	for (k = 0; min <= max; k++)

		pr[k] = min++;
		return (pr);
}
