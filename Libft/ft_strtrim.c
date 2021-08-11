/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:26:24 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/08/11 18:01:44 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*buscarChar(char *s1, char *set, int pos)
{
	int		y;
	char	*ptr;

	y = 0;
	while (set[y] != '\0')
	{
		if (set[y] == s1[pos])
		{
			ptr = &s1[pos];
			return (ptr);
		}
		y++;
	}
	return (NULL);
}

static char	*segundaCadena(int i, char *s1, char *set)
{
	char	*ptr;

	ptr = NULL;
	while (i > 0 && ptr == NULL)
	{
		ptr = buscarChar((char *)s1, (char *)set, i);
		i--;
	}
	return (ptr);
}

static unsigned int	calculos(char *ptr1, char *ptr2)
{
	int	contPtr1;
	int	contPtr2;
	int	total;

	contPtr1 = ft_strlen(ptr1);
	contPtr2 = ft_strlen(ptr2);
	total = contPtr1 - contPtr2;
	if (total < 0)
		return (total * -1);
	return (total);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		i;
	char	*ptr1;
	char	*ptr2;
	char	*result;

	i = 0;
	ptr1 = NULL;
	if (s1 == NULL)
		return (NULL);
	len = ft_strlen(s1);
	while (i < len && ptr1 == NULL)
	{
		ptr1 = buscarChar((char *)s1, (char *)set, i);
		i++;
	}
	i = ft_strlen(ptr1);
	ptr2 = segundaCadena(i, (char *)s1, (char *)set);
	i = calculos(ptr1, ptr2);
	result = (char *) malloc(i + 2);
	if (result == NULL)
		return (0);
	ft_strlcpy(result, ptr1, i + 2);
	return (result);
}
