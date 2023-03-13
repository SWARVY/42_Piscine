/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 20:17:15 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/28 15:53:30 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_arrlen(char *arr[])
{
	int	cnt;

	cnt = 0;
	while (arr[cnt])
		cnt += 1;
	return (cnt);
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

void	ft_sort_string_tab(char	**tab)
{
	char	*tmp;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = ft_arrlen(tab) - 1;
	while (i < len)
	{
		while (j < len)
		{
			if (ft_strcmp(*(tab + j), *(tab + j + 1)) > 0)
			{
				tmp = *(tab + j);
				*(tab + j) = *(tab + j + 1);
				*(tab + j + 1) = tmp;
			}
			j += 1;
		}
		j = 0;
		i += 1;
	}
}
