#include <stdio.h>
#include "library.h"

int main(void)
{
	int s = sumOfElements(10, 1, 2, 4, 5, 6, 2, 3, 17, 9, 19);
	int p = productOfElements(10, 1, 2, 4, 5, 6, 2, 3, 17, 9, 19);
	showArgs(10, 1, 2, 4, 5, 6, 2, 3, 17, 9, 19);

	printf("Sum %d, Product %d\n", s , p);

	return 0;
}