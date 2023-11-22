#include "main.h"

/**
 * _sqrt_recursion - return de square root of a natural number
 *
 * @n: to check
 *
 * Return: the square root or -1 if it does not have
 */

int _sqrt_recursion(int n)
{
	return (_alcuadrado(n, 0));
}

/**
 * _sqrt - _sqrt_recursion
 * @n: integer paramtr
 * @i: integer parameter
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
