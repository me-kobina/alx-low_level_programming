#include "main.h"

void swap_int(int *a, int *b)
{
	int A, B;

	A = *a;
	B = *b;
	*b = A;
	*a = B;
}
