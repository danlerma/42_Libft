/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comItoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:43:03 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/10/03 14:43:04 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "comprobacion.h"

void	comItoa(void)
{
	long	num;
	char	*numero;

	num = 0;
	printf("Nº int:  %ld\n", num);
	numero = ft_itoa(num);
	printf("Nº char: %s\n", numero);
}
