/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 22:59:03 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/01/21 11:06:29 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	cnt;

	cnt = 1;
	while (cnt <= nb / cnt)
	{
		if (cnt * cnt == nb)
			return (cnt);
		cnt += 1;
	}
	return (0);
}
