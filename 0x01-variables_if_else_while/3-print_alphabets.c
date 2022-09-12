#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
/**
*main - Entry point
*
*Return: Always 0 (Success/correct)
*/

int main(void)
{int x;
int y;
for (x = 'A'; x <= 'Z'; x++)
{
int lower_x = tolower(x);
putchar(lower_x);
}
for (y = 'A'; y <= 'Z'; y++)
{
putchar(x);
}
putchar('\n');
return (0);
}
