/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:18:19 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/19 13:18:21 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt])
	{
		write(1, &str[cnt], 1);
		cnt += 1;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	cnt;

	cnt = 0;
	while (s1[cnt] || s2[cnt])
	{
		if (s1[cnt] != s2[cnt])
			return (s1[cnt] - s2[cnt]);
		cnt += 1;
	}
	return (0);
}

void	ft_sort(int argc, char *argv[])
{
	int		cnt_a;
	int		cnt_b;
	char	*tmp;

	cnt_a = argc - 1;
	cnt_b = 1;
	while (cnt_a > 0)
	{
		while (cnt_b < cnt_a)
		{
			if (ft_strcmp(argv[cnt_b], argv[cnt_b + 1]) > 0)
			{
				tmp = argv[cnt_b];
				argv[cnt_b] = argv[cnt_b + 1];
				argv[cnt_b + 1] = tmp;
			}
			cnt_b += 1;
		}
		cnt_b = 1;
		cnt_a -= 1;
	}
}

int	main(int argc, char *argv[])
{
	int	cnt;

	cnt = 1;
	ft_sort(argc, argv);
	while (argv[cnt])
	{
		ft_putstr(argv[cnt]);
		cnt += 1;
	}
	return (0);
}
