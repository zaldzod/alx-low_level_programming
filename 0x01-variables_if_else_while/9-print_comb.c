#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*
*Return: Always 0 (Success/correct)
*/
int main(void)
{int x;
for (x = 48; x <= 57; x++)
{
putchar(x);
if (x == 57)
break;
else
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
