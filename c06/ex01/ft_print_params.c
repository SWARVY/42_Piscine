/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:08:00 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/19 13:08:01 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	cnt_1;
	int	cnt_2;

	cnt_1 = 1;
	cnt_2 = 0;
	while (cnt_1 < argc)
	{
		while (argv[cnt_1][cnt_2])
		{
			write(1, &argv[cnt_1][cnt_2], 1);
			cnt_2 += 1;
		}
		write(1, "\n", 1);
		cnt_1 += 1;
		cnt_2 = 0;
	}
}
