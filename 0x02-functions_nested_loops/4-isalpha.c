#include "main.h"
/**
* _isalpha - Return 1 if c is a letter. lowercase or uppercase
*@x: The int to print
*  Return: Always 0.
*/
int _isalpha(int x)
{
if ((x > 'a' && x < 'z') || (x > 'A' && x < 'Z'))
{
return (1);
}
else
{return (0);
}
}
