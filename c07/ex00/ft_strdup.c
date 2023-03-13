/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:02:08 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/24 15:49:20 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt])
		cnt += 1;
	return (cnt);
}

char	*ft_strdup(char *src)
{
	char	*string;
	int		len;
	int		cnt;

	len = ft_strlen(src);
	string = (char *)malloc(sizeof(char) * (len + 1));
	cnt = 0;
	while (src[cnt])
	{
		string[cnt] = src[cnt];
		cnt += 1;
	}
	string[cnt] = '\0';
	return (string);
}
