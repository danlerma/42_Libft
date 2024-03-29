/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comprobacion.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:44:39 by dlerma-c          #+#    #+#             */
/*   Updated: 2022/10/03 14:44:43 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMPROBACION_H

# define COMPROBACION_H
# include "../Libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>
# include <string.h>

void	comIsalpha(void);
void	comIsdigit(void);
void	comIsalnum(void);
void	comIsascii(void);
void	comIsprint(void);
void	comStrlen(void);
void	comMemset(void);
void	comBzero(void);
void	comMemcpy(void);
void	comMemmove(void);
void	comStrlcpy(void);
void	comStrlcat(void);
void	comToupper(void);
void	comTolower(void);
void	comStrchr(void);
void	comStrrchr(void);
void	comStrncmp(void);
void	comStrnstr(void);
void	comMemchr(void);
void	comMemcmp(void);
void	comAtoi(void);
void	comCalloc(void);
void	comStrdup(void);
void	comSubstr(void);
void	comStrtrim(void);
void	comSplit(void);
void	comItoa(void);
void	comStrmapi(void);
void	comStrjoin(void);

#endif
