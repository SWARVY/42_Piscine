/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:25:25 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/11 19:37:57 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_check_seperator(char first_val, char second_val, char third_val)
{
	if (!(first_val == '7' && second_val == '8' && third_val == '9'))
		write(1, ", ", 2);
}

void	ft_write_comb(char first_value, char second_value, char third_value)
{
	write(1, &first_value, 1);
	write(1, &second_value, 1);
	write(1, &third_value, 1);
	ft_check_seperator(first_value, second_value, third_value);
}

void	ft_make_comb(char first_value, char second_value, char third_value)
{
	while (first_value <= '7')
	{
		while (second_value <= '8')
		{
			while (third_value <= '9')
			{
				ft_write_comb(first_value, second_value, third_value);
				third_value++;
			}
			second_value++;
			third_value = second_value + 1;
		}
		second_value = first_value + 1;
		first_value++;
	}
}

void	ft_print_comb(void)
{
	char	first_value;
	char	second_value;
	char	third_value;

	first_value = '0';
	second_value = '1';
	third_value = '2';
	ft_make_comb(first_value, second_value, third_value);
}
