/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comMemchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:43:55 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/10/03 14:44:18 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "comprobacion.h"

void	comMemchr(void)
{
	const char	str[] = "fun?ction.s 1lo1cate the ?terminat.ing";
	char		*ret;

	ret = memchr(str, 't', 6);
	printf("ORIGINAL (t): %s\n", ret);
	ret = ft_memchr(str, 't', 6);
	printf("FUNCION  (t): %s\n\n", ret);
	ret = memchr(str, '?', 38);
	printf("ORIGINAL (?): %s\n", ret);
	ret = ft_memchr(str, '?', 38);
	printf("FUNCION  (?): %s\n\n", ret);
	ret = memchr(str, '.', 38);
	printf("ORIGINAL (.): %s\n", ret);
	ret = ft_memchr(str, '.', 38);
	printf("FUNCION  (.): %s\n\n", ret);
	ret = memchr(str, 49, 38);
	printf("ORIGINAL (1): %s\n", ret);
	ret = ft_memchr(str, 49, 38);
	printf("FUNCION  (1): %s\n\n", ret);
	ret = memchr(str, 'w', 38);
	printf("ORIGINAL (w): %s\n", ret);
	ret = ft_memchr(str, 'w', 38);
	printf("FUNCION  (w): %s\n\n", ret);
}
