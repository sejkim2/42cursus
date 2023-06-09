/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sejkim2 <sejkim2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:56:45 by sejkim2           #+#    #+#             */
/*   Updated: 2023/03/22 17:21:06 by sejkim2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//lst는 원래 함수에서 포인터 변수의 주소 (그것에 저장된 주소를 그 다음 주소로 변경할 필요가 있어서 주소의 주소, 즉 이중 포인터를 사용)
//new는 저장된 주소(값)만 사용하기 때문에 일중 포인터만 사용

//리스트의 마지막에 새 노드 넣기
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	if (last == 0)
		*lst = new;	//new가 첫번째 노드이면 lst가 가리키는 첫번째 위치가 new가 됨 ([heap 메모리] <-- *lst(왼쪽의 주소가 들어있음) <-- lst(왼쪽의 주소가 들어있음)
	else
		last->next = new;	//lst의 마지막에 new 
}
