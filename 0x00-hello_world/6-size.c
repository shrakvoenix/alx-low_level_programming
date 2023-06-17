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
	
		printf("Size of a char: %ln byte(s)\n", sizeof(char));
		printf("Size of a int: %ln byte(s)\n", sizeof(int));
		printf("Size of a long int: %ln byte(s)\n", sizeof(long int));
		printf("Size of a long long int: %ln byte(s)\n", sizeof(long long int));
		printf("Size of a float: %ln byte(s)\n", sizeof(float));
		return (0);
}
