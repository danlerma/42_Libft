/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comStrdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:44:54 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/10/03 14:44:55 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "comprobacion.h"

void	comStrdup(void)
{
	char	str1[] = "Function first appeared in 4.4BSD.";
	char	str2[] = "Function first appeared in 4.4BSD.";

	printf("Original : %s\n", strdup(str1));
	printf("Funcion  : %s\n", ft_strdup(str2));
}
