/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comIsprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:43:00 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/10/03 14:43:01 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "comprobacion.h"

void	comIsprint(void)
{
	char	c;

	c = 'Q';
	printf("ORIGINAL %c: %d\n", c, isprint(c));
	printf("FUNCION %c: %d\n", c, ft_isprint(c));
	c = 0200;
	printf("\nORIGINAL %c: %d\n", c, isprint(c));
	printf("FUNCION %c: %d\n", c, ft_isprint(c));
	c = '1';
	printf("\nORIGINAL %c: %d\n", c, isprint(c));
	printf("FUNCION %c: %d\n", c, ft_isprint(c));
	c = 0x80;
	printf("\nORIGINAL %c: %d\n", c, isprint(c));
	printf("FUNCION %c: %d\n", c, ft_isprint(c));
	c = 97;
	printf("\nORIGINAL %c: %d\n", c, isprint(c));
	printf("FUNCION %c: %d\n", c, ft_isprint(c));
	c = 0x78;
	printf("\nORIGINAL %c: %d\n", c, isprint(c));
	printf("FUNCION %c: %d\n", c, ft_isprint(c));
}
