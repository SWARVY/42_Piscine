/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:42:31 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/14 14:42:32 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	cnt;

	cnt = 0;
	while (src[cnt] && cnt < n)
	{
		dest[cnt] = src[cnt];
		cnt += 1;
	}
	while (cnt < n)
	{
		dest[cnt] = '\0';
		cnt += 1;
	}
	return (dest);
}
