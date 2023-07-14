/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceduard3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:34:02 by ceduard3          #+#    #+#             */
/*   Updated: 2023/05/28 16:38:37 by ceduard3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int x)
{
	int	i;

	i = 0;
	ft_putchar ('/');
	while (i < x - 2)
	{
		ft_putchar('*');
		i++;
	}
	if (x >= 2)
	{
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	middle_line(int x, int y)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (j < y - 2)
	{
		ft_putchar('*');
		while (i < x - 2)
		{
			ft_putchar(' ');
			i++;
		}
		if (x >= 2)
		{
			ft_putchar('*');
		}
		ft_putchar('\n');
		j++;
	}
}

void	last_line(int x)
{
	int	i;

	ft_putchar('\\');
	i = 0;
	while (i < x - 2)
	{
		ft_putchar('*');
		i++;
	}
	if (x >= 2)
	{
		ft_putchar('/');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		first_line(x);
		middle_line(x, y);
		if (y >= 2)
		{
			last_line(x);
		}
	}
}
