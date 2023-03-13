/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 22:58:54 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/01/21 11:07:13 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	cnt;
	int	check;

	if (nb < 3)
		return (2);
	while (nb)
	{
		cnt = 2;
		check = 1;
		while (cnt <= nb / cnt)
		{
			if (nb % cnt == 0)
			{
				check = 0;
				break ;
			}
			cnt += 1;
		}
		if (check)
			return (nb);
		nb += 1;
	}
	return (nb);
}
