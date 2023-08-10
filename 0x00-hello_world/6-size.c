#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
printf ("Size of a char: %u byte(s)\n", sizesof(char));
printf ("Size of an int: %u byte(s)\n", sizesof(int));
printf ("Size of a long int: %u byte(s)\n", sizesof(long int));
printf ("Size of a long long int: %u byte(s)\n", sizesof(long long int));
printf ("Size of a float: %u byte(s)\n", sizesof(float));
return (0);
}
