#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

#define ABS(x) ((x) < 0 ? -(x) : (x))

/**
* main - computes the absolute value of a number
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int num = -10;

	printf("Absolute value of %d is %d\n", num, ABS(num));

	double value = -3.14;

	printf("Absolute value of %f is %f\n", value, ABS(value));

	return (0);
}

#endif
