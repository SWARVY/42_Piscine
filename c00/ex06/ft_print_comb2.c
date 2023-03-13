/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:58:53 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/14 15:19:34 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print(char o1, char o2, char c1, char c2)
{
	if (!(o1 == '9' && o2 == '9' && c1 == '9' && c2 == '9'))
	{
		write(1, &o1, 1);
		write(1, &o2, 1);
		write(1, " ", 1);
		write(1, &c1, 1);
		write(1, &c2, 1);
		if (!(o1 == '9' && o2 == '8' && c1 == '9' && c2 == '9'))
			write(1, ", ", 2);
	}
}

void	ft_make_right(char o1, char o2)
{
	char	c1;
	char	c2;

	c1 = o1;
	c2 = o2;
	if (c2 != '9')
		c2 += 1;
	else
	{
		c2 = '0';
		c1 += 1;
	}
	while (c1 <= '9')
	{
		while (c2 <= '9')
		{
			ft_print(o1, o2, c1, c2);
			c2 += 1;
		}
		c2 = '0';
		c1 += 1;
	}
}

void	ft_make_left(char first_val, char second_val)
{
	while (first_val <= '9')
	{
		while (second_val <= '9')
		{
			ft_make_right(first_val, second_val);
			second_val += 1;
		}
		second_val = '0';
		first_val += 1;
	}
}

void	ft_print_comb2(void)
{
	char	first_val;
	char	second_val;

	first_val = '0';
	second_val = '0';
	ft_make_left(first_val, second_val);
}
