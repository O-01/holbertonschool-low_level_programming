#include "main.h"

/**
 * _abs - compute absolute value of integer
 * @ooo: number for absoluteness verification
 *
 * Return: 0
 *
 */

int _abs(int ooo)
{
	if (ooo < 0)
	{
		ooo = ooo * (-1);
	}
	return (ooo);
}
