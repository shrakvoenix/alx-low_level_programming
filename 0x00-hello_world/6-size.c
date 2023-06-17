#include <stdio.h>
/**
 * main - This code prints size of various types on the computer
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	
		printf("Size of a char: %d byte(s)\n", sizeof(char));
		printf("Size of a int: %d byte(s)\n", sizeof(int));
		printf("Size of a long int: %d byte(s)\n", sizeof(long int));
		printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
		printf("Size of a float: %d byte(s)\n", sizeof(float));
		return (0);
}
