/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:50:59 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/16 11:08:17 by hyeoshin         ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cnt;
	int				len;

	cnt = 0;
	while (src[cnt] && cnt + 1 < size)
	{
		dest[cnt] = src[cnt];
		cnt += 1;
	}
	dest[cnt] = '\0';
	len = ft_strlen(src);
	return (len);
}
