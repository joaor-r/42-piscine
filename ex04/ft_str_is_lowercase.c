/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor2 <jovitor2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:42:52 by jovitor2          #+#    #+#             */
/*   Updated: 2023/06/06 13:47:27 by jovitor2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 97 || str[i] > 122)
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

//     resultado = ft_str_is_lowercase("1234");
//     printf("resultado: %d\n", resultado);

//     resultado = ft_str_is_lowercase("FESACADASE");
//     printf("resultado: %d\n", resultado);

//     resultado = ft_str_is_lowercase("asdf1234");
//     printf("resultado: %d\n", resultado);

//     resultado = ft_str_is_lowercase("abcdefg");
//     printf("resultado: %d\n", resultado);

//     resultado = ft_str_is_lowercase("");
//     printf("resultado: %d\n", resultado);

//     return (0);
// }