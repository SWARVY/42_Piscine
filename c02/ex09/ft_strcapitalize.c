/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:26:46 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/30 16:25:05 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_validate(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

void	ft_strlowcase(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		if (str[cnt] >= 65 && str[cnt] <= 90)
			str[cnt] += 32;
		cnt += 1;
	}
}

char	*ft_strcapitalize(char *str)
{
	int		cnt;
	int		check;

	ft_strlowcase(str);
	cnt = 0;
	check = 1;
	while (str[cnt])
	{
		if (ft_validate(str[cnt]))
		{
			if ((str[cnt] >= 'a' && str[cnt] <= 'z') && check)
				str[cnt] -= 32;
			check = 0;
		}
		else
			check = 1;
		cnt += 1;
	}
	return (str);
}
