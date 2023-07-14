/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor2 <jovitor2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:31:53 by jovitor2          #+#    #+#             */
/*   Updated: 2023/06/08 11:24:33 by jovitor2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (*src && i < size - 1)
		{
			*dest = *src;
			src++;
			dest++;
			i++;
		}
		*dest = '\0';
	}
	return (i);
}

// #include <stdio.h>
// int	main(void)
// {
// 		char dest[10];
// 		char *src;
// 		int size;
// 		src = "abcde fghi";
// 		size = 5;
// 		printf("%d\n", ft_strlcpy(dest, src, size));
// }