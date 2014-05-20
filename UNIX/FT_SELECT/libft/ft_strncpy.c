/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassi-f <mfassi-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 21:15:18 by mfassi-f          #+#    #+#             */
/*   Updated: 2013/12/30 15:49:24 by fmarin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i != n && *(s2 + i) != '\0')
	{
		s1[i] = *(s2 + i);
		i++;
	}
	while (i < n)
	{
		s1[i++] = '\0';
	}
	return (s1);
}
