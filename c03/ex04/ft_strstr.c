/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:12:26 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/16 13:12:46 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
		cnt += 1;
	return (cnt);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	idx;
	int	check;

	check = 0;
	if (!*to_find)
		return (str);
	while (*str)
	{
		if (ft_strlen(str) >= ft_strlen(to_find))
		{
			idx = 0;
			check = 0;
			while (to_find[idx])
			{
				if (str[idx] != to_find[idx])
					check = 1;
				idx += 1;
			}
			if (!check)
				return (str);
		}
		str++;
	}
	return (0);
}
