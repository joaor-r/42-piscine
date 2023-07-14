/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor2 <jovitor2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:27:13 by jovitor2          #+#    #+#             */
/*   Updated: 2023/06/07 14:48:42 by jovitor2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {

// 	char src1[] = "AbcDefGhiJk"; /*char *src = "222222" printf("%s",
// 		ft_strncpy(dest ,src, 1));*/
// 	//Antes da Troca
// 	//printf("%s\n", src);
// 	ft_strlowcase(src1);
// 	//Depois da Troca
// 	printf("%s\n", src1);
// 	// Copia e substitui n elementos de um char/array para um outro array
// 	printf("\n");
// 	return (0);
// }