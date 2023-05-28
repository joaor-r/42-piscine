/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 14:47:51 by ceduard3          #+#    #+#             */
/*   Updated: 2023/05/28 14:57:31 by ceduard3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int x, int y)
{
	int	i;

	i = 0;
	if (x > 0 && y > 0)
		ft_putchar('A');
	while (i < x - 2)
	{
		ft_putchar('B');
		i++;
	}
	if (x >= 2)
	{
		ft_putchar('C');
	}
	ft_putchar ('\n');
}

void	middle_line(int x, int y)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (j < y - 2)
	{
		ft_putchar('B');
		while (i < x - 2)
		{
			ft_putchar(' ');
			i++;
		}
		if (x >= 2)
		{
			ft_putchar('B');
		}
		ft_putchar ('\n');
	j++;
	}
}

void	last_line(int x, int y)
{
	int	i;

	i = 0;
	if (x > 0 && y > 0)
		ft_putchar('A');
	while (i < x - 2)
	{
		ft_putchar('B');
			i++;
		if (x >= 2)
		{
			ft_putchar('C');
		}
		ft_putchar ('\n');
	}
}

void	rush(int x, int y)
{
	first_line(x, y);
	middle_line(x, y);
	if (y >= 2)
		last_line(x, y);
}
