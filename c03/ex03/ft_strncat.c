/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:07:43 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/16 13:08:02 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	cnt_1;
	unsigned int	cnt_2;

	cnt_1 = 0;
	while (dest[cnt_1] != '\0')
		cnt_1 += 1;
	cnt_2 = 0;
	while (src[cnt_2] && cnt_2 < nb)
	{
		dest[cnt_1] = src[cnt_2];
		cnt_1 += 1;
		cnt_2 += 1;
	}
	dest[cnt_1] = '\0';
	return (dest);
}
