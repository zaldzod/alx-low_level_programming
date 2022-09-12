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
for (x = 'A'; x <= 'Z'; x++)
if (x == 'E')
continue;
else if (x == 'Q')
continue;
else
{
int lower_x = tolower(x);
putchar(lower_x);
}
putchar('\n');
return (0);
}
