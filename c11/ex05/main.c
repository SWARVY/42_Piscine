/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:25:48 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/26 20:16:43 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	plus(int a, int b);
int	minus(int a, int b);
int	multiple(int a, int b);
int	divide(int a, int b);
int	modulo(int a, int b);
int	ft_atoi(char *str);

void	ft_putstr(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt])
		write(1, &str[cnt++], 1);
}

void	ft_putnbr(int nb)
{
	char	tmp;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	if (nb < 10)
	{
		tmp = nb + '0';
		write(1, &tmp, 1);
	}
}

int	check_zero(char number, char operator)
{
	if (number == '0' && operator == '/')
	{
		ft_putstr("Stop : division by zero\n");
		return (1);
	}
	if (number == '0' && operator == '%')
	{
		ft_putstr("Stop : modulo by zero\n");
		return (1);
	}
	return (0);
}

int	find_index(char op)
{
	if (op == '+')
		return (0);
	if (op == '-')
		return (1);
	if (op == '*')
		return (2);
	if (op == '/')
		return (3);
	if (op == '%')
		return (4);
	return (-1);
}

int	main(int ac, char **av)
{
	int	(*op_func[5])(int, int);
	int	idx;
	int	res;

	if (ac != 4 || check_zero(av[3][0], av[2][0]))
		return (0);
	op_func[0] = plus;
	op_func[1] = minus;
	op_func[2] = multiple;
	op_func[3] = divide;
	op_func[4] = modulo;
	idx = find_index(av[2][0]);
	if (idx == -1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	res = op_func[idx](ft_atoi(av[1]), ft_atoi(av[3]));
	ft_putnbr(res);
	write(1, "\n", 1);
	return (0);
}
