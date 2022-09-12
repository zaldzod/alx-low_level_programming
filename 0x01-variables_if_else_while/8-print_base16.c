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
for (x = '0'; x <= '9'; x++)
{
putchar(x);
}
for (y = 'A'; y <= 'F'; y++)
{
int lower_y = tolower(y);
putchar(lower_y);
}
putchar('\n');
return (0);
}
