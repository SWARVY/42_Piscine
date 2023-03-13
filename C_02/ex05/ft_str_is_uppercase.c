/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:55:17 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/14 14:59:00 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	cnt;

	cnt = 0;
	if (str[cnt] == '\0')
		return (1);
	while (str[cnt] != '\0')
	{
		if (!(str[cnt] >= 'A' && str[cnt] <= 'Z'))
			return (0);
		cnt += 1;
	}
	return (1);
}
