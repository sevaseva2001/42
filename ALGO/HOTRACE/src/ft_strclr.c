/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocosquer <ocosquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/14 03:05:27 by ocosquer          #+#    #+#             */
/*   Updated: 2013/12/15 21:17:27 by mfassi-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <tools.h>

void	ft_strclr(char *s)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		s[i] = '\0';
		i++;
	}
}
