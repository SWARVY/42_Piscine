/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:13:25 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/26 18:33:34 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_white_space(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt])
	{
		if (str[cnt] == 32 || str[cnt] == '\n' || str[cnt] == '\t'
			|| str[cnt] == '\v' || str[cnt] == '\f' || str[cnt] == '\r')
			cnt += 1;
		else
			return (cnt);
	}
	return (cnt);
}

int	ft_atoi(char *str)
{
	int			cnt;
	int			sign;
	long long	sum;

	sum = 0;
	sign = 1;
	cnt = ft_is_white_space(str);
	while (str[cnt] == 43 || str[cnt] == 45)
	{
		if (str[cnt] == '-')
			sign = -sign;
		cnt += 1;
	}
	while (str[cnt])
	{
		if (str[cnt] >= '0' && str[cnt] <= '9')
			sum = sum * 10 + (str[cnt] - '0');
		else
			break ;
		cnt += 1;
	}
	return (sum * sign);
}
