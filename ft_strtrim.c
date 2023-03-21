/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejkim2 <sejkim2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:58:03 by sejkim2           #+#    #+#             */
/*   Updated: 2023/03/21 17:58:04 by sejkim2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int isSet(char ch, char const *set)
{
    size_t i;

    i = 0;
    while (set[i])
    {
        if (ch == set[i])
            return (i);
        else
            i++;
    }
    return (-1);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t head;
    size_t tail;
    size_t s1_len;
    char *dest;

    if (s1 == set)
    {
        dest = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
        ft_strlcpy(dest, s1, ft_strlen(s1) + 1);
        return (dest);
    }
    if (s1 == 0)
    {
        dest = malloc(sizeof(char) * 1);
        *dest = '\0';
        return (dest);
    }
    if (set == 0)
    {
        dest = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
        ft_strlcpy(dest, s1, ft_strlen(s1) + 1);
        return (dest);
    }
    s1_len = ft_strlen(s1);
    head = 0;
    tail = s1_len - 1;
    while (head < s1_len && isSet(s1[head], set) > -1)
        head++;
    while (tail > head && isSet(s1[tail], set) > -1)
        tail--;
    dest = (char *)malloc(sizeof(char) * (tail - head + 2));
    if (dest == 0)
        return (0);
    ft_strlcpy(dest, s1 + head, tail - head + 2);
    return (dest);
}