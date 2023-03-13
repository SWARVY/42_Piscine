/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 11:51:04 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/01/30 16:56:23 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	zero(int size)
{
	while (size < 16)
	{
		write(1, "0", 1);
		size += 1;
	}
}

void	adr(void *addr)
{
	unsigned long long	value;
	char				tmp[16];
	int					i;
	int					j;

	value = (unsigned long long)addr;
	i = 0;
	while (value > 0)
	{
		tmp[i] = "0123456789abcdef"[value % 16];
		value /= 16;
		i += 1;
	}
	tmp[i] = '\0';
	zero(i);
	j = 0;
	while (tmp[j])
	{
		write(1, &tmp[i - (j + 1)], 1);
		j += 1;
	}
	write(1, ": ", 2);
}

void	hex(void *addr, unsigned int curr, unsigned int end, unsigned int size)
{
	char	*memory;

	memory = (char *)addr;
	while (curr < end)
	{
		if (curr < size)
		{
			write(1, &"0123456789abcdef"[memory[curr] / 16], 1);
			write(1, &"0123456789abcdef"[memory[curr] % 16], 1);
		}
		else
			write(1, "  ", 2);
		if (curr % 2)
			write(1, " ", 1);
		curr += 1;
	}
}

void	ch(void *addr, unsigned int curr, unsigned int end, unsigned int size)
{
	int		cnt;
	char	*memory;

	cnt = 0;
	memory = (char *)addr;
	while (curr < end && curr < size)
	{
		if (memory[curr] >= 32 && memory[curr] <= 126)
			write(1, &memory[curr], 1);
		else
			write(1, ".", 1);
		curr += 1;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	curr;

	curr = 0;
	while (curr < size)
	{
		adr(addr + curr);
		hex(addr, curr, curr + 16, size);
		ch(addr, curr, curr + 16, size);
		curr += 16;
	}
	return (addr);
}
