/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comMemcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:44:27 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/10/03 14:44:29 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "comprobacion.h"

void	comMemcpy(void)
{
	char str1[15] = {"hola mundozzzz\0"};
	char str2[11] = {"Inesperado\0"};
	char str3[15] = {"hola mundozzzz\0"};
	char str4[11] = {"Inesperado\0"};

	printf("ORIGINAL\nAntes memcpy(): %s\n", str2);
	memcpy(str2 + 5, str1, 6);
	printf("Despues  memcpy(): %s\n", str2);

	printf("FUNCION\nAntes memcpy(): %s\n", str4);
	ft_memcpy(str4 + 5, str3, 6);
	printf("Despues  memcpy(): %s", str4);
}
