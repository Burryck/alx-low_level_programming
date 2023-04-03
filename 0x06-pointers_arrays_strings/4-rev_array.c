#include <stdio.h>

/**array - reverses an array
 *
 * @a: array to reverse
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int i = 0, t;

	while (i < n / 2)
	{
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
			i++;
	}
}
