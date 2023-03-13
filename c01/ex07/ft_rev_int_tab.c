/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:59:12 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/12 20:25:53 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	cnt;

	cnt = 0;
	while (cnt < size / 2)
	{
		tmp = tab[cnt];
		tab[cnt] = tab[(size - 1) - cnt];
		tab[(size - 1) - cnt] = tmp;
		cnt += 1;
	}
}
