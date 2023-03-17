#include <stdio.h>

/**
 * main - I sometimes suffer from insomnia. And when I can't fall asleep,
 * I play what I call the alphabet game
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
