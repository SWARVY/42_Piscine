/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:02:13 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/24 13:55:21 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	idx;

	if (min >= max)
	{
		range[0] = (void *)0;
		return (0);
	}
	size = max - min;
	range[0] = (int *)malloc(sizeof(int) * (size));
	idx = 0;
	while (idx < size)
	{
		range[0][idx] = min;
		min += 1;
		idx += 1;
	}
	return (size);
}
