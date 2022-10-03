/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comMemset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:44:36 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/10/03 14:44:38 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "comprobacion.h"

void	comMemset(void)
{
	char	str1[] = "hola mundo";
	char	str2[] = "hola mundo";
	char	str3[] = "\0";
	char	str4[] = "\0";

	memset(str1, 'a', 4);
	printf("\nOriginal: %s\n", str1);
	ft_memset(str2, 'a', 4);
	printf("Funcion:  %s\n", str2);
	memset(str3, '.', 1);
	printf("\nOriginal: %s\n", str3);
	ft_memset(str4, '.', 4);
	printf("Funcion:  %s\n", str4);
}
