#include "main.h"

char *_strstr(char *haystack, char *needle)
{
    int i = 0, n = 0, maybe = 0, stop = 0;
    
    char *help = haystack;

    while (help[i] != '\0')
    {
        if (needle[n] == ' ')
        {
            stop = 1;
        }
        if (stop == 0)
        {
            if (help[i] == needle[n])
            {
                n++;
                maybe++;
            }
            else if (n != 0)
            {
                n = 0;
                haystack = haystack + maybe + 1;
            }
            else 
            {
                haystack++;
            }
        }
        i++;
    }
    return (haystack);
}