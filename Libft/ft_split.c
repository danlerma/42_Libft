/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:26:07 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/08/11 18:17:25 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	count_sep(const char *s, char c, char type)
{
	int	i;

	i = 0;
	if (type == 'p')
	{
		while (s[i] == c)
			i++;
	}
	else
	{
		while (s[i] != c)
			i++;
	}
	return (i);
}

static int	count_rows(const char *str, char c)
{
	int	i;
	int	bool;
	int	y;

	i = 0;
	y = 0;
	bool = 0;
	while (str[y])
	{
		if (str[y] != c && bool == 0)
		{
			bool = 1;
			i++;
		}
		else if (str[y] == c)
			bool = 0;
		y++;
	}
	return (i);
}

static int	count_column(const char *s, char c)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			return (i + 1);
		i++;
	}
	return (i);
}

static char	**assing_str(char **str, const char *s, char c, int numrows)
{
	int	i;
	int	ncolumn;
	int	numchar;
	int	aux;

	i = 0;
	aux = 0;
	aux = count_sep(s, c, 'p');
	while (i < numrows)
	{
		str[i] = (char *)malloc(ncolumn + 1 * sizeof(char));
		if (str[i] == NULL)
			return (0);
		ncolumn = count_column(&s[aux], c);
		numchar = count_sep(&s[aux], c, 's');
		ft_strlcpy(str[i], &s[aux], numchar + 1);
		aux = aux + ncolumn;
		i++;
	}
	str[i] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		nrows;
	char	**str;

	if (s == NULL)
		return (NULL);
	nrows = count_rows(s, c);
	str = (char **)malloc(nrows + 1 * sizeof(char *));
	if (str == NULL)
		return (NULL);
	str = assing_str(str, s, c, nrows);
	return (str);
}
