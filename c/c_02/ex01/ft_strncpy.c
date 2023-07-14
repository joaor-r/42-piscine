/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor2 <jovitor2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 11:56:11 by jovitor2          #+#    #+#             */
/*   Updated: 2023/06/07 14:47:55 by jovitor2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char dest[10] = {"abcdefghij"};
// 	char *src = "zxwlm"; /*char *src = "222222" printf("%s",
// 		ft_strncpy(dest ,src, 1));*/
// 	//Antes da Troca
// 	printf("%s\n", dest);
// 	ft_strncpy(dest, src, 5);
// 	//Depois da Troca
// 	printf("%s\n", dest);
// 	// Copia e substitui n elementos de um char/array para um outro array
// 	printf("\n");
// 	return (0);
// }