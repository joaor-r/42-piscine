/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor2 <jovitor2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:06:27 by jovitor2          #+#    #+#             */
/*   Updated: 2023/06/06 12:23:47 by jovitor2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {		
// 	char str1[] = "Joao";
// 	char str2[] = "Vitor";
// 	printf("Str1 %s\nStr2 %s",str1,str2);
// 	ft_strcpy(str1, str2);
// 	printf("\nApós a conversão minha string1 é: %s\n",str1);
// }