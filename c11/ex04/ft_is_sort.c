/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:14:50 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/30 10:45:51 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	cnt;
	int	asc;
	int	dsc;

	cnt = 0;
	asc = 0;
	dsc = 0;
	while (cnt < length - 1)
	{
		if ((*f)(tab[cnt], tab[cnt + 1]) <= 0)
			asc += 1;
		if ((*f)(tab[cnt], tab[cnt + 1]) >= 0)
			dsc += 1;
		cnt += 1;
	}
	if (asc == cnt || dsc == cnt)
		return (1);
	return (0);
}
