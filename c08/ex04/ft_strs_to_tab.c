/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:51:01 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/25 18:59:55 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stkstr;
	int			cnt;

	stkstr = malloc((ac + 1) * sizeof(t_stock_str));
	if (stkstr == NULL)
		return ((void *)0);
	cnt = 0;
	while (cnt < ac)
	{
		stkstr[cnt].size = ft_strlen(av[cnt]);
		stkstr[cnt].str = av[cnt];
		stkstr[cnt].copy = ft_strdup(av[cnt]);
		cnt += 1;
	}
	stkstr[cnt].str = 0;
	stkstr[cnt].copy = 0;
	return (stkstr);
}
