/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor2 <jovitor2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:15:59 by jovitor2          #+#    #+#             */
/*   Updated: 2023/06/06 13:47:49 by jovitor2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
// int main()
// {
//     int resultado;

//     resultado = ft_str_is_numeric("1234");
//     printf("resultado: %d\n", resultado);

//     resultado = ft_str_is_numeric("FESACADASE");
//     printf("resultado: %d\n", resultado);

//     resultado = ft_str_is_numeric("asdf1234");
//     printf("resultado: %d\n", resultado);

//     resultado = ft_str_is_numeric("000999");
//     printf("resultado: %d\n", resultado);

//     resultado = ft_str_is_numeric("");
//     printf("resultado: %d\n", resultado);

//     return (0);
// }