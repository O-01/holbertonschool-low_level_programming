#include "main.h"

/**
 * flip_bits - returns number of bits that must be toggled until orig = dest
 * @orig: input number from which bits to be modified
 * @dest: desired result once bits have been toggled
 * Return: number of bits to toggle
 */
unsigned int flip_bits(unsigned long int orig, unsigned long int dest)
{
	unsigned long int versus = orig ^ dest;
	unsigned int sum = 0;

	for (; versus > 0;)
		sum += (versus & 1), versus >>= 1;
	return (sum);
}
