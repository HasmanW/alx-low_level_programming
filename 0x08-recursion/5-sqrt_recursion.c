#include "main.h"

/**
 * _sqrt_recursion - caculates the sqrt
 * @n: parameter int n
 * Return: returns an int
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - _sqrt_recursion
 * @n: first parameter
 * @i: second parameter
 * Return: returns sqrt
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
