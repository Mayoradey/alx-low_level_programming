#include <stdio.h>

/**
 * main - Print the letters of the alphabeth in reverse
 * Return: Always 0
 */
int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);

	putchar('\n');

	return (0);
}
