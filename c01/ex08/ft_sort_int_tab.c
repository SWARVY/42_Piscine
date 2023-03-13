/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:08:05 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/14 10:44:17 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	cnt_a;
	int	cnt_b;
	int	tmp;

	cnt_a = 0;
	cnt_b = 0;
	while (cnt_a < size)
	{
		while (cnt_b < size - cnt_a - 1)
		{
			if (tab[cnt_b] > tab[cnt_b + 1])
			{
				tmp = tab[cnt_b];
				tab[cnt_b] = tab[cnt_b + 1];
				tab[cnt_b + 1] = tmp;
			}
			cnt_b += 1;
		}
		cnt_b = 0;
		cnt_a += 1;
	}
}
