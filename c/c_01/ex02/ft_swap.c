/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor2 <jovitor2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:53:31 by jovitor2          #+#    #+#             */
/*   Updated: 2023/06/05 15:54:57 by jovitor2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// int main(){
// 	int	a;
// 	int	b;

// 	a = 5;
// 	b = 15;
// 	ft_swap(&a, &b);
// 	printf("%d\n%d", a,b);
// }
