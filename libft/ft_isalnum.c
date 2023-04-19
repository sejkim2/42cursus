/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejkim2 <sejkim2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:56:31 by sejkim2           #+#    #+#             */
/*   Updated: 2023/03/21 18:22:50 by sejkim2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//알파벳 혹은 0~9사이 값인지 확인하는 함수
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}