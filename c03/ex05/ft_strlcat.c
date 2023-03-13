/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:21:24 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/16 15:21:43 by hyeoshin         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	cnt;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	cnt = 0;
	while (*(src + cnt) && len_dest + cnt + 1 < size)
	{
		*(dest + len_dest + cnt) = *(src + cnt);
		cnt += 1;
	}
	*(dest + len_dest + cnt) = '\0';
	if (size < len_dest)
		return (size + len_src);
	return (len_dest + len_src);
}
