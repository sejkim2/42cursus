#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t len;
    unsigned int i;

    len = ft_strlen(s);
    i = 0;
    while (s[i])
    {
        f(i, s + i);
        i++;
    }
}