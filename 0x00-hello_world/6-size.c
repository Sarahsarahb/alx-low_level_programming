#include <stdio.h>
/**
 *  * main -  Size is not grandeur, and territory does not make a nation.
 *  * Return: 0 if success.
 */

int main(void)
{

char a;
int b;
long int c;
long long int d;
float f;

printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(a));

printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(b));

printf("Size of a long Ant: %d bytes(s)\n", (unsigned long)sizeof(c));

printf("Size of a long long int: %d bytes(s)\n", (unsigned long)sizeof(d));

printf("Size of a float: %d bytes(s)\n", (unsigned long)sizeof(f));

return (0);
}
