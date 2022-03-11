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

	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an int: %ld byte(s)\n", sizeof(intType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longLongType));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatType));
	return (0);
}
