/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:31:37 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/24 13:20:02 by hyeoshin         ###   ########.fr       */
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

int	ft_base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (ft_strlen(base) == 0 || ft_strlen(base) == 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+'
			|| base[i] == ' ' || base[i] == '\n' || base[i] == '\t'
			|| base[i] == '\v' || base[i] == '\f' || base[i] == '\r')
			return (0);
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j])
				return (0);
			j += 1;
		}
		i += 1;
		j = i + 1;
	}
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
	if (!ft_base_check(base))
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
