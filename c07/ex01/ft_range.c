/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:02:11 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/24 14:00:41 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	size;
	int	cnt;

	size = max - min;
	array = (int *)malloc(sizeof(int) * size);
	if (min >= max)
		return (NULL);
	cnt = 0;
	while (cnt < size)
	{
		array[cnt] = min;
		min += 1;
		cnt += 1;
	}
	return (array);
}
