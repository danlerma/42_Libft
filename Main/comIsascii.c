/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comIsascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:42:49 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/10/03 14:42:51 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "comprobacion.h"

void	comIsascii(void)
{
	char	c;

	c = 'n';
	printf("Original: %d", isascii(c));
	printf("\nFunción: %d", ft_isascii(c));
	c = '1';
	printf("\nOriginal: %d", isascii(c));
	printf("\nFunción: %d", ft_isascii(c));
	c = 0200;
	printf("\nOriginal %c: %d", c, isascii(c));
	printf("\nFunción: %d", ft_isascii(c));
}
