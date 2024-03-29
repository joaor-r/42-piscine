/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor2 <jovitor2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 15:09:45 by jovitor2          #+#    #+#             */
/*   Updated: 2023/06/05 13:36:32 by jovitor2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main (void){
// 	int a;
// 	int b;
// 	int div;
// 	int mod;
// 	a=10;
// 	b=5;
// 	div=0;
// 	mod=0;
// 	ft_div_mod(a,b,&div,&mod);
// 	printf("%d\n%d\n", div,mod);
// }