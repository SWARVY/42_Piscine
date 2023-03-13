/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:02:17 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/26 14:28:01 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_base_check(char *base);
int	ft_atoi_base(char *str, char *base);
int	ft_strlen(char *str);

long long	get_len(char *base, long long *num)
{
	long long	tmp;
	int			len;

	len = 1;
	tmp = *num;
	while (tmp > ft_strlen(base) - 1)
	{
		tmp /= ft_strlen(base);
		len += 1;
	}
	return (len);
}

int	get_square(int len, char *base)
{
	int	cnt;
	int	sum;
	int	base_len;

	cnt = 0;
	sum = 1;
	base_len = ft_strlen(base);
	while (cnt < len - 1)
	{
		sum *= base_len;
		cnt += 1;
	}
	return (sum);
}

char	*allocate(long long *value, char *base, int *end)
{
	char	*array;
	int		len;

	if (*value >= 0)
	{
		len = get_len(base, value);
		array = (char *)malloc(sizeof(char) * (len + 1));
		*end = len;
	}
	else
	{
		*value = -*value;
		len = get_len(base, value);
		array = (char *)malloc(sizeof(char) * (len + 2));
		array[0] = '-';
		*end = len + 1;
	}
	return (array);
}

char	*convert(char *base_to, long long num)
{
	char	*array;
	int		start;
	int		end;
	int		len;
	int		square;

	if (num >= 0)
		start = 0;
	else
		start = 1;
	array = allocate(&num, base_to, &end);
	len = get_len(base_to, &num);
	while (start < end)
	{
		square = get_square(len, base_to);
		array[start] = base_to[(num / square) % ft_strlen(base_to)];
		num -= (num / square) * square;
		len -= 1;
		start += 1;
	}
	array[end] = '\0';
	return (array);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char		*converted_num;
	long long	num;

	if (!ft_base_check(base_to) || !ft_base_check(base_from))
		return (NULL);
	num = ft_atoi_base(nbr, base_from);
	converted_num = convert(base_to, num);
	return (converted_num);
}
