#include "main.h"
/**
 * _puts - prints string
 * @str:string to print
 * Return:int
 */
intg _puts(char *str)
{
	char *s = str;
	while(*str)
		_putchar(*str++);
	return (str - s);
}
/**
 * _putchar - prints a char
 * @c:char to print
 * Return: # of bytes
 */
int _putchar(int c)
{
	static int i;
	static char buf[OUTPUT_BUF_SIZE];

	if (c == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
