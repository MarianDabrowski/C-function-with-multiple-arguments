#include "library.h"

void showArgs(int args, ...)
{
	va_list numbers;
	va_start(numbers, args);
	int i;
	printf("ARGUMENTS IN FUNCTION:\n");
	for(i = 0; i < args; ++i) printf("%d ", va_arg(numbers, int));
	printf("\n");
	va_end(numbers);
}

int sumOfElements(int args, ...)
{
	va_list numbers;
	va_start(numbers, args);
	int i, sum = 0;
	//showArgs(args);
	for(i = 0; i < args; ++i) sum += va_arg(numbers, int);
	va_end(numbers);
	return sum;
}

int productOfElements(int args, ...)
{
	va_list numbers;
	va_start(numbers, args);
	int i, product = 1;
	//showArgs(args);
	for(i = 0; i < args; ++i) product *= va_arg(numbers, int);
	va_end(numbers);
	return product;
}