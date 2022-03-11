#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to convert
 * Return: none
 */
void print_binary(unsigned long int n)
{
	unsigned int pow_mul = 1;
	unsigned int count = 0;
	unsigned int adder = 1;
	unsigned int digits = 0;
	unsigned int num_remaining = n;
	unsigned int sum = 0;

	if (n > 1)
	{
	while (num_remaining != 0)
	{
		digits = 0;
		for (pow_mul = 1; (pow_mul * 2) <= num_remaining;)
	{
		pow_mul *= 2;
		digits++;
	}
	for (count = 1; count < digits; count++)
	{
		adder *= 10;
	}
	sum += adder;
	adder = 1;
	num_remaining -= pow_mul;
	}
	printf("%d%d", sum, num_remaining);
	}
	else
		printf("%lu", n);
}
