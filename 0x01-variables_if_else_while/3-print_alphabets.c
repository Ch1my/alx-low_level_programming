#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int ch0;

	for (ch0 = 'a'; ch0 <= 'z'; ch0++)
		putchar(ch0);
	for (ch0 = 'A'; ch0 <= 'Z'; ch0++)
		putchar(ch0);
	putchar('\n');
	return (0);
}
