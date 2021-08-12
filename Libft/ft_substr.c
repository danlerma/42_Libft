/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 16:48:52 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/08/12 20:21:44 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*subStr;
	unsigned int	y;
	unsigned int	i;
	unsigned int	len;

	y = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	subStr = (char *)malloc((len + 1) * sizeof(*s));
	if (subStr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (i >= start && y < len)
		{
			subStr[y] = s[i];
			y++;
		}
		i++;
	}
	subStr[y] = '\0';
	return (subStr);
}
