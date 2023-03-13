/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:46:29 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/14 14:51:05 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	cnt;

	cnt = 0;
	if (str[cnt] == '\0')
		return (1);
	while (str[cnt] != '\0')
	{
		if (str[cnt] < 'A' || str[cnt] > 'z')
			return (0);
		else if (str[cnt] > 'Z' && str[cnt] < 'a')
			return (0);
		cnt += 1;
	}
	return (1);
}
