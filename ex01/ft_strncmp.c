/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor2 <jovitor2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:06:22 by jovitor2          #+#    #+#             */
/*   Updated: 2023/06/11 14:53:05 by jovitor2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Compara duas strings apenas até o tamanho de n

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		else if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char dest[] = "adcd";
// 	char src[] = "abcd";
// 	int n;
// 	int res;
// 	n = 3;
// 	res = ft_strncmp(dest, src, n);
// 	printf("Result: %d\n", res);
// 	return (0);
// }