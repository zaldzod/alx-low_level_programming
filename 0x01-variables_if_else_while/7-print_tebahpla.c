#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*
*Return: Always 0 (Success/correct)
*/
int main(void)
{
for (int x = 'Z'; x >= 'A'; x--)
{
int lower_x = tolower(x);
putchar(lower_x);
}
putchar('\n');
return (0);
}
