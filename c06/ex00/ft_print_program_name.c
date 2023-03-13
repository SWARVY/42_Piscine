/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:03:31 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/19 13:03:32 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	cnt;

	cnt = 0;
	while (argv[0][cnt] && argc)
	{
		write(1, &argv[0][cnt], 1);
		cnt += 1;
	}
	write(1, "\n", 1);
	return (0);
}
