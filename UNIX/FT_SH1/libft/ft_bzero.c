/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassi-f <mfassi-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:31:50 by mfassi-f          #+#    #+#             */
/*   Updated: 2013/12/08 19:18:41 by mfassi-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp;

	tmp = s;
	while (n-- != 0)
	{
		*tmp = 0;
		tmp++;
	}
}
