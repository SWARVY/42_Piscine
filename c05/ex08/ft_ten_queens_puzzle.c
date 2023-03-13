/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 09:09:31 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/01/23 10:45:01 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int *array)
{
	int		cnt;
	char	tmp;

	cnt = 0;
	while (cnt < 10)
	{
		tmp = array[cnt] + '0';
		write(1, &tmp, 1);
		cnt += 1;
	}
	write(1, "\n", 1);
}

int	my_abs(int value)
{
	if (value < 0)
		return (-value);
	return (value);
}

int	promise(int *array, int index)
{
	int	cnt;

	cnt = 0;
	while (cnt < index)
	{
		if (array[cnt] == array[index]
			|| (my_abs(array[cnt] - array[index]) == my_abs(cnt - index)))
			return (0);
		cnt += 1;
	}
	return (1);
}

void	queen(int *array, int index, int *amount)
{
	int	cnt;

	cnt = 0;
	if (index == 10)
	{
		print(array);
		*amount += 1;
		return ;
	}
	while (cnt < 10)
	{
		array[index] = cnt;
		if (promise(array, index))
			queen(array, index + 1, amount);
		cnt += 1;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	array[10];
	int	cnt;
	int	amount;

	cnt = 0;
	amount = 0;
	while (cnt < 10)
	{
		array[cnt] = 0;
		cnt += 1;
	}
	queen(array, 0, &amount);
	return (amount);
}
