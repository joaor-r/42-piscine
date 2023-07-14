/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor2 <jovitor2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:42:07 by jovitor2          #+#    #+#             */
/*   Updated: 2023/06/05 16:47:00 by jovitor2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

	// Insertion Sort
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	j;

	i = 0;
	while (i++ < size)
	{
		temp = tab[i];
		j = i - 1;
		while (j >= 0 && tab[j] > temp)
		{
			tab[j + 1] = tab[j];
			j = j - 1;
		}
		tab[j + 1] = temp;
	}
}
// int	main(void)

// {
// 	int size = 0;

// 	int tab[] = {9, 2, 6, 8, 7, 1, 4, 3, 5};
// 	ft_sort_int_tab(tab, 9);
// 	for (int i = 0; i < 9; i++)
// 	{
// 		printf("%d ", tab[i]);
// 	}
// }