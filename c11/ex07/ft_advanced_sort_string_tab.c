/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 20:26:26 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/28 15:57:36 by hyeoshin         ###   ########.fr       */
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

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
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
			if ((*cmp)(*(tab + j), *(tab + j + 1)) > 0)
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
