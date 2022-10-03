/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comSubstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:45:44 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/10/03 14:45:45 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "comprobacion.h"

void	comSubstr(void)
{
	char	s[] = "locate a substring in a string";
	char	*sub;

	printf("Antes: %s\n", s);
	sub = ft_substr(s, 5, 10);
	printf("Despues: %s\n", sub);
	printf("\nAntes:   i just want this part #############\n");
	sub = ft_substr("i just want this part #############", 0, 22);
	printf("Despues: %s    %zu\n", sub, strlen(sub));
	printf("\nAntes:   i just want this part #############\n");
	sub = ft_substr("i just want this part #############", 5, 10);
	printf("Despues: %s    %zu\n", sub, strlen(sub));
	printf("\nAntes:   1\n");
	sub = ft_substr("1", 42, 42000000);
	printf("Despues: %s    %zu\n", sub, strlen(sub));
	printf("\nAntes:   1\n");
	sub = ft_substr("tripuoulle", 0, 42000);
	printf("Despues: %s    %zu\n", "tripuoulle", strlen(sub));
}
