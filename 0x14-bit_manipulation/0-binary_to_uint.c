#include "main.h"
#include <math.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0s and 1s
 * Return: the converted number, or 0
*/
unsigned int binary_to_uint(const char *b)
{
int count = 0;
unsigned int cur_digit = 0;
int rev_count = 0;
unsigned int pow_mul = 1;
unsigned int sum = 0;

if (b == NULL)
{
return (0);
}
for (count = 0; b[count] != '\0'; count++)
{
if (b[count] != '1' && b[count] != '0')
{
return (0);
}
}
for (rev_count = 1; (count - rev_count) > (-1); rev_count++)
{
cur_digit = (b[(count - rev_count)] - '0');
if (cur_digit == 1)
{
sum += pow_mul;
}
pow_mul *= 2;
}
return (sum);
}
