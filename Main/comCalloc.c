/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comCalloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:42:19 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/10/03 14:42:33 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "comprobacion.h"

void	comCalloc(void)
{
	char    *ptr;
	char    c[] = "Hola mundo";

	ptr = ft_calloc(10,sizeof(char));
	printf("Original: %s\n", ptr);
	ft_memcpy(ptr, c, sizeof(c));
	printf("Funcion:  %s", ptr);
}
