#include "main.h"

/**
 * _is lower - function to check if 
 * character is lowercase
 *
 * @C: checks input of function
 *
 * Return: returns 1 if `c` is lowercase
 * otherwise always 0 (success)
 */

int _is lower(int c)
{
if (c >= 97 && c <= 122)
return (1);
return (0);
}
