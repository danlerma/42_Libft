/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comTolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:45:55 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/10/03 14:45:58 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "comprobacion.h"

void	comTolower(void)
{
	char c, result;

	c = 'Z';
	result = ft_tolower(c);
	printf("tolower(%c) = %c\n", c, result);
	c = 'm';
	result = ft_tolower(c);
	printf("tolower(%c) = %c\n", c, result);
	c = '1';
	result = ft_tolower(c);
	printf("tolower(%c) = %c\n", c, result);
}
