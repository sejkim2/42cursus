/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejkim2 <sejkim2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 14:09:15 by sejkim2           #+#    #+#             */
/*   Updated: 2023/05/25 17:04:11 by sejkim2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

int	ft_printf_s(char *s)
{
	if (s == 0)
		return (write(1, "(null)", 6));
	else
		return (write(1, s, ft_strlen_printf(s)));
}