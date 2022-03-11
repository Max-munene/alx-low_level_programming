#include<stdio.h>
/**
 * main - using the main to check size of types
 *
 * Description: print size of char, int, float, long int, long long
 *
 * Return:0
 */
int main(void)
{
	char charType;
	int intType;
	long int longIntType;
	long long longLongType;
	float floatType;

	printf("Size of a char: %zu bytes\n", sizeof(charType));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of a long int: %zu bytes\n", sizeof(longIntType));
	printf("Size of a long long: %zu bytes\n", sizeof(longLongType));
	printf("Size of a float: %zu bytes\n", sizeof(floatType));
	return (0);
}
