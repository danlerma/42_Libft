/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comIsalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:42:41 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/10/03 14:42:45 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "comprobacion.h"

void	comIsalpha(void)
{
	char	c;

	c = '1';
	printf("\nOriginal: %d", isalpha(c));
	printf("\nFunción:  %d\n", ft_isalpha(c));
	c = 'q';
	printf("\nOriginal: %d", isalpha(c));
	printf("\nFunción:  %d\n", ft_isalpha(c));
	c = 0212;
	printf("\nOriginal: %d", isalpha(c));
	printf("\nFunción:  %d\n\n", ft_isalpha(c));
}
