/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:32:34 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/18 10:32:38 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	sum;
	int	cnt;

	sum = 1;
	cnt = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (cnt <= nb)
	{
		sum *= cnt;
		cnt += 1;
	}
	return (sum);
}
