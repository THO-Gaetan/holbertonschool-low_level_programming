#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints a quote about programming using puts function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 0;
char statment[];
if (n > 0)
{
strcpy(statment, "is positive\n"); }
else if (n == 0)
{
strcpy(statment, "is zero\n"); }
else
{
strcpy(statment, "is negative\n"); }
return ("%s\n", statment); }
