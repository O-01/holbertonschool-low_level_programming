#include "main.h"

/**
 * print_last_digit - obvious
 * @oOo: int of which we output last digit
 *
 * Return: 0
 */

int print_last_digit(int oOo)
{
	int OoO;

	OoO = (oOo % 10);
	if (OoO < 0)
	{
		OoO = (OoO * (-1));
	}
	_putchar(OoO + '0');
	return (OoO);
}
