#include <stdio.h>
/**
 * main - A program that prints the size of various types
 * Return: 0 (good)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

printf("Size of a char: %i byte(S)\n", sizeof(c));
printf("Size of a int: %i byte(S)\n", sizeof(i));
printf("Size of a long int: %i byte(S)\n", sizeof(li));
printf("Size of a long long int: %i byte(S)\n", sizeof(lli));
printf("Size of a float: %i byte(S)\n", sizeof(f));
return (0);
}
