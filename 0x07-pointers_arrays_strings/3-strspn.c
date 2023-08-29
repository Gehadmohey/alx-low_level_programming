#include "main.h"

/**
 * _strspn -  gets the length of a prefix substring
 *
 * @s: bytes in the initial segment
 * @accept: bytes
 *
 * Return: the number of bytes in the initial segment of s which consist only of bytes from accept(itr)
*/

unsigned int _strspn(char *s, char *accept);
{
unsigned int itr, jtr;
for (itr = 0; s[itr] != '\0'; itr++)
{
if (accept[jtr] == '\0')
return (itr);
}
}
return (itr);
}
