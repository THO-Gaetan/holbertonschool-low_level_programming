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
char statment[] = "Bonjour";
if (n > 0)
{
statment = printf("is positive\n"); }
else if (n == 0)
{
statment = printf("is zero\n"); }
else
{
statment = printf("is negative\n"); }
return (statment); }
