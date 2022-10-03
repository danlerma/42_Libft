/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comSplit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:44:45 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/10/03 14:44:46 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "comprobacion.h"

void	comSplit(void)
{
	char	*str = NULL;
	char	**result;
	int		i;

	printf("\nSTR inicial ( ' ' ): %s\n\n", str);
	result = ft_split(str, 0);
	i = 0;
	while (result[i])
	{
		printf("STR %d: %s\n", i, result[i]);
		i++;
	}
}
