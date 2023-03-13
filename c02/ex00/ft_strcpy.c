/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:33:53 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/14 14:40:21 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		cnt;

	cnt = 0;
	while (src[cnt] != '\0')
	{
		dest[cnt] = src[cnt];
		cnt += 1;
	}
	dest[cnt] = '\0';
	return (dest);
}
