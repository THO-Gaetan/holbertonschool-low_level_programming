#include "main.h"

char *_strpbrk(char *s, char *accept)
{
    int i = 0, change = 0, n;
    while (s[i] != '\0')
    {
        n = 0;
        while (accept[n] != '\0')
        {
            if (accept[n] == *s)
            {
                change = 1;
            }
            n++;
        }
        if (change == 0)
        {
            s++;
        }
        i++;
    }
    return (s);
}