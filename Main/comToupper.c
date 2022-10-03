/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comToupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:45:49 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/10/03 14:45:52 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "comprobacion.h"

void	comToupper(void)
{
	char	c, result;

	c = 'a';
	result = ft_tolower(c);
	printf("tolower(%c) = %c\n", c, result);
	c = 100;
	result = ft_tolower(c);
	printf("tolower(%c) = %c\n", c, result);
	c = '\n';
	result = ft_tolower(c);
	printf("tolower(%c) = %c\n", c, result);
}
