/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comStrjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:44:57 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/10/03 14:44:58 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "comprobacion.h"

void	comStrjoin(void)
{
	char	*c1 = "tripouille";
	char	*c2 = "42";

	printf("C1: %s\nC2: %s\n", c1, c2);
	printf("STR: %s\n", ft_strjoin(c1, c2));
}
