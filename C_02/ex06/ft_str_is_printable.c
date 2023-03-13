/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:20:23 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/14 15:22:12 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	cnt;

	cnt = 0;
	if (str[cnt] == '\0')
		return (1);
	while (str[cnt] != '\0')
	{
		if (!(str[cnt] >= 32 && str[cnt] <= 126))
			return (0);
		cnt += 1;
	}
	return (1);
}
