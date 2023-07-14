/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor2 <jovitor2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 13:01:44 by jovitor2          #+#    #+#             */
/*   Updated: 2023/06/11 14:20:15 by jovitor2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// int main (void)
// {
// 	char  dest[] = "This is the";
// 	char src[] = " way";
// 	unsigned int n = 2;
// 	char *sw = ft_strncat(dest,src,n);
// 	printf("SW: %s\n", sw);
// 	return 0;
// }
//Concatena um string/array com um 
//tamanho n pegando caracteres de outro array/string
