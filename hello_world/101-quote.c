#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints a quote by Dora Korpar to standard output
 * Return: Always 1 (Error)
 */
int main(void)
{
char *dora = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, dora, 59);
return (1);
}
