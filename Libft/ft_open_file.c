/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:28:01 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/11/24 16:46:35 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_open_file(char *file)
{
	int	fd;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		ft_print_errors("ERROR AL ABRIR EL ARCHIVO\n");
	return (fd);
}
