#include "main.h"
/**
* rev_string - prints a reverse string
*@s: A pointer to an int that will be changed
*
*Return: void
*/

void rev_string(char *s)
{
char *begin_c, *end_c, c;
int i;
int count;
int len = 0;

for (i = 0; s[i]; i++)
{
len++;
}
count = len;
begin_c = s;
end_c = s;
for (i = 0; i < count - 1; i++)
{
end_c++;
}
for (i = 0; i < count / 2; i++)
{
c = *end_c;
*end_c = *begin_c;
*begin_c = c;
begin_c++;
end_c--;
}
}
