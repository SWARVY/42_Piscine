/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:54:07 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/14 14:54:59 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	cnt;

	cnt = 0;
	if (str[cnt] == '\0')
		return (1);
	while (str[cnt] != '\0')
	{
		if (!(str[cnt] >= 'a' && str[cnt] <= 'z'))
			return (0);
		cnt += 1;
	}
	return (1);
}
