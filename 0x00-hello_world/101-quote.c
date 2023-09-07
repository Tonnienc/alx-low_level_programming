#include <stdio.h>
#include <unistd.h>
/**
 * main - a c program that prints to the standard error
 * Return 1 (its successful
 */
int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
