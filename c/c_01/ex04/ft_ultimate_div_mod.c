/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor2 <jovitor2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 15:18:33 by jovitor2          #+#    #+#             */
/*   Updated: 2023/06/05 16:49:27 by jovitor2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 5;
// 	b = 5;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("%d\n%d", a,b);
// }
