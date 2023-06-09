/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejkim2 <sejkim2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:57:34 by sejkim2           #+#    #+#             */
/*   Updated: 2023/03/21 18:45:40 by sejkim2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// write 함수의 세번째 인자가 size_t이며 만약 그 크기를 넘는 문자열이 들어올 때에 대한
// 예외 처리가 필요할 수도 있다
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
