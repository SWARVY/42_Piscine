/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:57:01 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/28 17:27:16 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				cnt;
	unsigned char	*tmp;

	tmp = (unsigned char *)str;
	cnt = 0;
	while (tmp[cnt] != '\0')
	{
		if (!(tmp[cnt] >= 32 && tmp[cnt] <= 126))
		{
			write(1, "\\", 1);
			ft_putchar("0123456789abcdef"[tmp[cnt] / 16]);
			ft_putchar("0123456789abcdef"[tmp[cnt] % 16]);
		}
		else
			ft_putchar(tmp[cnt]);
		cnt += 1;
	}
}
