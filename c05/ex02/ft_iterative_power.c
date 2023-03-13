/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 22:58:59 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/01/24 10:47:14 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	sum;

	sum = nb;
	while (power > 1)
	{
		sum *= nb;
		power -= 1;
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (sum);
}
