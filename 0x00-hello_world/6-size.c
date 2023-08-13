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

printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(c));
printf("Size of a int: %lu byte(S)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(S)\n", (unsigned long)sizeof(li));
printf("Size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(lli));
printf("Size of a float: %lu byte(S)\n", (unsigned long)sizeof(f));
return (0);
}
