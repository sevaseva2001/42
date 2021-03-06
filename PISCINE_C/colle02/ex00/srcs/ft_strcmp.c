/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <mesaskevin@live.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/23 15:42:42 by kmesas            #+#    #+#             */
/*   Updated: 2013/07/24 19:36:02 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	cur;

	cur = 0;
	while ((s1[cur] != '\0' || s2[cur] != '\0') && s1[cur] == s2[cur])
		cur += 1;
	return (s1[cur] - s2[cur]);
}

