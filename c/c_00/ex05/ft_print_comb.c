/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor2 <jovitor2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:08:01 by jovitor2          #+#    #+#             */
/*   Updated: 2023/05/31 17:08:33 by jovitor2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i, int j, int l)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &l, 1);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	l;

	i = '0';
	j = '1';
	l = '2';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			l = j + 1;
			while ('9' >= l)
			{
				ft_putchar(i, j, l);
				l++;
				if (i < '7')
					write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}
