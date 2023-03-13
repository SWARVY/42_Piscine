/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn_.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:54:10 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/14 18:30:31 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_check_seperator(int value, int n)
{
	if (value < (10 - n))
		write(1, ", ", 2);
}

void	ft_print(int *array, int n)
{
	int		cnt;
	int		check;
	char	tmp;

	cnt = 1;
	check = 1;
	while (cnt < n)
	{
		if (array[cnt - 1] >= array[cnt])
			check = 0;
		cnt += 1;
	}
	if (check)
	{
		cnt = 0;
		while (cnt < n)
		{
			tmp = array[cnt] + '0';
			write(1, &tmp, 1);
			cnt += 1;
		}
		ft_check_seperator(array[0], n);
	}
}

void	ft_print_combn(int n)
{
	int		array[9];
	int		cnt;

	cnt = 0;
	while (cnt < n)
	{
		array[cnt] = cnt;
		cnt += 1;
	}
	while (array[0] <= (10 - n) && n >= 1 && n < 10)
	{
		ft_print(array, n);
		array[n - 1] += 1;
		cnt = n - 1;
		while (cnt && n > 1)
		{
			if (array[cnt] > 9)
			{
				array[cnt - 1] += 1;
				array[cnt] = array[cnt - 1];
			}
			cnt -= 1;
		}
	}
}
