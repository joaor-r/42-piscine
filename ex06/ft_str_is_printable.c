/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor2 <jovitor2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:52:33 by jovitor2          #+#    #+#             */
/*   Updated: 2023/06/07 17:35:55 by jovitor2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
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

//     resultado = ft_str_is_printable("1234");
//     printf("resultado: %d\n", resultado);

//     resultado = ft_str_is_printable("FESACADASE");
//     printf("resultado: %d\n", resultado);

//     resultado = ft_str_is_printable("asdfAB1234");
//     printf("resultado: %d\n", resultado);

//     resultado = ft_str_is_printable("abcdefg");
//     printf("resultado: %d\n", resultado);

//     resultado = ft_str_is_printable("");
//     printf("resultado: %d\n", resultado);

//     return (0);
// }