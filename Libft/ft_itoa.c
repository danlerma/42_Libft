/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:27:12 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/08/11 17:58:35 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static unsigned int	numCharacters(int nb)
{
	int	i;

	i = 0;
	if (nb != 0)
	{
		if (nb < 0)
			i = i + 1;
		while (nb != 0)
		{
			nb = nb / 10;
			i++;
		}
	}
	else
		i = 1;
	return (i);
}

static char	*numNegative(char *str, int nb, int i)
{
	unsigned int	num;

	str[0] = '-';
	nb = nb * (-1);
	num = nb;
	while (i > 0)
	{
		str[i] = (num % 10) + '0';
		num = num / 10;
		i--;
	}
	return (str);
}

static char	*numbers(int nb, int numC)
{
	char	*str;
	int		i;

	i = numC - 1;
	str = (char *)malloc(numC + 1);
	if (str == NULL)
		return (NULL);
	if (nb >= 0)
	{
		while (i >= 0)
		{
			str[i] = (nb % 10) + '0';
			nb = nb / 10;
			i--;
		}
	}
	else
		str = numNegative(str, nb, i);
	str[numC] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	unsigned int		numChar;
	char				*str;

	numChar = numCharacters(n);
	str = numbers(n, numChar);
	return (str);
}
