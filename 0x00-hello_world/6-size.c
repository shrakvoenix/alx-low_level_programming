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
		printf("size of char: %lu 1 byte(s)\n", (unsigned long)sizeof(a));
		printf("size of int: %lu 4 byte(s)\n", (unsigned long)sizeof(b));
		printf("size of long int: %lu 4 byte(s)\n", (unsigned long)sizeof(c));
		printf("size of long long int: %lu 8 byte(s)\n", (unsigned long)sizeof(d));
		printf("size of float: %lu 4 byte(s)\n", (unsigned long)sizeof(e));
		return (0);
}
