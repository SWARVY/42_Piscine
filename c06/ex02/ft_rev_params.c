/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:11:45 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/19 13:11:45 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	cnt;

	cnt = 0;
	while (argc > 1)
	{
		while (argv[argc - 1][cnt])
		{
			write(1, &argv[argc - 1][cnt], 1);
			cnt += 1;
		}
		write(1, "\n", 1);
		cnt = 0;
		argc -= 1;
	}
}
