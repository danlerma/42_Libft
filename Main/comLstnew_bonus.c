/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comLstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:43:22 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/10/03 14:43:35 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "comprobacion.h"

void comLstnew_bonus(void)
{
	int content = 98;
	t_list *ls;

	ls = NULL;
	printf("DIR: %p\n", ls);
	ls = ft_lstnew(&content);
	printf("DIR: %p\n", ls);
	printf("ls: %s", ls->content);
	return (0);
}
