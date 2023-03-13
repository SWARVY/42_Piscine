/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:26:36 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/17 14:26:38 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt])
		cnt += 1;
	return (cnt);
}

int	ft_base_check_char(char *base)
{
	int	cnt;

	cnt = 0;
	if (ft_strlen(base) == 0 || ft_strlen(base) == 1)
		return (0);
	while (base[cnt])
	{
		if (base[cnt] == 43 || base[cnt] == 45)
			return (0);
		cnt += 1;
	}
	return (1);
}

int	ft_base_check_dupl(char *base)
{
	int	cnt_1;
	int	cnt_2;
	int	check;

	cnt_1 = 0;
	cnt_2 = 1;
	check = 0;
	while (cnt_1 < ft_strlen(base) - 1)
	{
		while (cnt_2 < ft_strlen(base))
		{
			if (base[cnt_1] == base[cnt_2])
				check += 1;
			cnt_2 += 1;
		}
		cnt_1 += 1;
		cnt_2 = cnt_1 + 1;
	}
	if (check)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long	nb;
	int			basenum;

	nb = nbr;
	if (!ft_base_check_char(base) || !ft_base_check_dupl(base))
		return ;
	basenum = ft_strlen(base);
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb >= basenum)
	{
		ft_putnbr_base(nb / basenum, base);
		nb %= basenum;
	}
	if (nb < basenum)
		write(1, &base[nb], 1);
}
