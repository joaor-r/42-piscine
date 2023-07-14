/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor2 <jovitor2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:08:01 by jovitor2          #+#    #+#             */
/*   Updated: 2023/05/30 15:26:51 by jovitor2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n)
{
	write (1, &n, 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = -1;
	while (n1++ < 98)
	{
		n2 = n1;
		while (n2++ < 99)
		{
			ft_putchar (n1 / 10 + 48);
			ft_putchar (n1 % 10 + 48);
			ft_putchar (' ');
			ft_putchar (n2 / 10 + 48);
			ft_putchar (n2 % 10 + 48);
			if (n1 != 98)
			{
				write (1, ", ", 2);
			}
		}
	}
}
