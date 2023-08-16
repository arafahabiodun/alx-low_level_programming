#include <stdio.h>
/**
 * main - A program that prints the size of various types
 * Return: 0 if exited properly, non-zero otherwose
 */
int main(void)
{
	printf("Size of a char: %i byte(S)\n", sizeof(char));
	printf("Size of a int: %i byte(S)\n", sizeof(int));
	printf("Size of a long int: %i byte(S)\n", sizeof(long int));
	printf("Size of a long long int: %i byte(S)\n", sizeof(long long int));
	printf("Size of a float: %d byte(S)\n", sizeof(float));
	return (0);
}
