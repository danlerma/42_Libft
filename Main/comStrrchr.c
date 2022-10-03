/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comStrrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:45:25 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/10/03 14:45:26 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "comprobacion.h"

void	comStrrchr(void)
{
	const char	str[] = "?in the string po1inted.to by s";
	char		*ret;

	ret = strrchr(str, 't');
	printf("ORIGINAL (t): %s\n", ret);
	ret = ft_strrchr(str, 't');
	printf("FUNCION  (t): %s\n\n", ret);
	ret = strrchr(str, '?');
	printf("ORIGINAL (?): %s\n", ret);
	ret = ft_strrchr(str, '?');
	printf("FUNCION  (?): %s\n\n", ret);
	ret = strrchr(str, '.');
	printf("ORIGINAL (.): %s\n", ret);
	ret = ft_strrchr(str, '.');
	printf("FUNCION  (.): %s\n\n", ret);
	ret = strrchr(str, 49);
	printf("ORIGINAL (1): %s\n", ret);
	ret = ft_strrchr(str, 49);
	printf("FUNCION  (1): %s\n\n", ret);
	ret = strrchr(str, 'w');
	printf("ORIGINAL (w): %s\n", ret);
	ret = ft_strrchr(str, 'w');
	printf("FUNCION  (w): %s\n\n", ret);
}
