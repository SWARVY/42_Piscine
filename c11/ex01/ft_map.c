/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:48:59 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/29 10:44:02 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*array;
	int	cnt;

	array = (int *)malloc(sizeof(int) * length);
	cnt = 0;
	while (cnt < length)
	{
		array[cnt] = (*f)(tab[cnt]);
		cnt += 1;
	}
	return (array);
}
