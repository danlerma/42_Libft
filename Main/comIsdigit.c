/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comIsdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:42:55 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/10/03 14:42:57 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "comprobacion.h"

void	comIsdigit(void)
{
	char	c;

	c = 's';
	printf("Original: %d", isdigit(c));
	printf("\nFunción: %d", ft_isdigit(c));
	c = 'q';
	printf("\nOriginal: %d", isdigit(c));
	printf("\nFunción: %d", ft_isdigit(c));
	c = 48;
	printf("\nOriginal: %d", isdigit(c));
	printf("\nFunción: %d", ft_isdigit(c));
}
