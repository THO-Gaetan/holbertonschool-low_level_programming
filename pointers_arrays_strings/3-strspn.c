#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
    unsigned int r = 0;

    int n;

    int i = 0;

    while (s[i] != '\0')
    {
        n = 0;
        while (accept[n] != '\0')
        {
            if (s[i] == accept[n])
            {
                r++;
                break;
            }
            n++;
        }
        i++;
    }
    return (n);
}