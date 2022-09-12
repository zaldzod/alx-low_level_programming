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
for (int x = '0'; x <= '9'; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
