/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 18:16:20 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/26 16:14:28 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt])
		write(1, &str[cnt++], 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	if (nb < 10)
		ft_putchar(nb + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	cnt;

	cnt = 0;
	while (par[cnt].str)
	{
		ft_putstr(par[cnt].str);
		ft_putchar('\n');
		ft_putnbr(par[cnt].size);
		ft_putchar('\n');
		ft_putstr(par[cnt].copy);
		ft_putchar('\n');
		cnt += 1;
	}
}
