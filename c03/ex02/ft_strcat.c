/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:53:31 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/16 12:56:16 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	cnt_1;
	int	cnt_2;

	cnt_1 = 0;
	while (dest[cnt_1] != '\0')
		cnt_1 += 1;
	cnt_2 = 0;
	while (src[cnt_2] != '\0')
	{
		dest[cnt_1] = src[cnt_2];
		cnt_1 += 1;
		cnt_2 += 1;
	}
	dest[cnt_1] = '\0';
	return (dest);
}
