/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor2 <jovitor2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:36:31 by jovitor2          #+#    #+#             */
/*   Updated: 2023/06/12 14:07:56 by jovitor2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	cont;

	result = 0;
	sign = 1;
	cont = 0;
	while (str[cont] == 32 || (str[cont] >= 9 && str[cont] <= 13))
		cont++;
	while (str[cont] == '-' || str[cont] == '+')
	{
		if (str[cont] == '-')
			sign *= -1;
		cont++;
	}
	while (str[cont] >= '0' && str[cont] <= '9')
	{
		result = result * 10 + str[cont] - '0';
		cont++;
	}
	return (sign * result);
}
// #include <stdio.h>
// int	main(int argc, char *argv[])
// {
	// (void)argc;
	// int val;

	// val = ft_atoi(argv[1]);
	// printf("%d", val);
	// return (0);
// }