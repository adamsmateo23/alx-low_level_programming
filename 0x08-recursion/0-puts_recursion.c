#include "main.h"
/**
 * _puts_recursion is going to be a bit like puts();
 * @s : stands for the input argument
 * Return: Always 0(Sucess)
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putschar('\n');
}
