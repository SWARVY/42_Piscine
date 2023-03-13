/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:12:43 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/14 19:34:21 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		cnt;
	char	tmp;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		tmp = str[cnt];
		write(1, &tmp, 1);
		cnt += 1;
	}
}
