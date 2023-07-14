/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor2 <jovitor2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:48:18 by jovitor2          #+#    #+#             */
/*   Updated: 2023/06/07 17:35:45 by jovitor2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 65 || str[i] > 90)
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

//     resultado = ft_str_is_uppercase("1234");
//     printf("resultado: %d\n", resultado);

//     resultado = ft_str_is_uppercase("FESACADASE");
//     printf("resultado: %d\n", resultado);

//     resultado = ft_str_is_uppercase("asdfAB1234");
//     printf("resultado: %d\n", resultado);

//     resultado = ft_str_is_uppercase("abcdefg");
//     printf("resultado: %d\n", resultado);

//     resultado = ft_str_is_uppercase("");
//     printf("resultado: %d\n", resultado);

//     return (0);
// }