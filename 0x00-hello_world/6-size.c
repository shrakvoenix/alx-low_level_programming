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
	float f;
		printf("Size of a char: %ln byte(s)\n", sizeof(a));
		printf("Size of a int: %ln byte(s)\n", sizeof(b));
		printf("Size of a long int: %ln byte(s)\n", sizeof(c));
		printf("Size of a long long int: %ln byte(s)\n", sizeof(d));
		printf("Size of a float: %ln byte(s)\n", sizeof(f));
		return (0);
}
