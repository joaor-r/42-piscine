/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor2 <jovitor2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:59:47 by jovitor2          #+#    #+#             */
/*   Updated: 2023/06/11 14:57:23 by jovitor2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Compara duas string e retorna uma valor da comparação
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char dest[] = "ac";
// 	char src[] = "ab";
// 	int tst = ft_strcmp(dest, src);
// 	printf("%d \n", tst);
// }