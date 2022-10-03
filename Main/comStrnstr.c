/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comStrnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:45:21 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/10/03 14:45:23 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "comprobacion.h"

void	comStrnstr(void)
{
	size_t	max = strlen("hola mundo");
	char	*i1 = strnstr("hola mundo", "a", max);
	char	*i2 = ft_strnstr("hola mundo", "a", max);

	printf("\nOriginal (len = %zu): %s\n", max, i1);
	printf("\nFuncion  (len = %zu): %s\n", max, i2);
}
