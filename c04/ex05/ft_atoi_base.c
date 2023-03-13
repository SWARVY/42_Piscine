/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:20:40 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/17 15:20:41 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		else if (base[cnt] == 32 || base[cnt] == '\n' || base[cnt] == '\t')
			return (0);
		else if (base[cnt] == '\v' || base[cnt] == '\f' || base[cnt] == '\r')
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

int	ft_get_index(char *base, char c)
{
	int	cnt;

	cnt = 0;
	while (base[cnt])
	{
		if (base[cnt] == c)
			return (cnt);
		cnt += 1;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	cnt;
	int	sum;

	cnt = 0;
	sum = 0;
	sign = 1;
	if (!ft_base_check_dupl(base) || !ft_base_check_char(base))
		return (0);
	while (str[cnt] == 32 || str[cnt] == '\n' || str[cnt] == '\t'
		|| str[cnt] == '\v' || str[cnt] == '\f' || str[cnt] == '\r')
		cnt += 1;
	while (str[cnt] == '+' || str[cnt] == '-')
	{
		if (str[cnt] == '-')
			sign = -sign;
		cnt += 1;
	}
	while (ft_get_index(base, str[cnt]) != -1)
	{
		sum = (sum * ft_strlen(base)) + ft_get_index(base, str[cnt]);
		cnt += 1;
	}
	return (sign * sum);
}
