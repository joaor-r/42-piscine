/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor2 <jovitor2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:09:04 by jovitor2          #+#    #+#             */
/*   Updated: 2023/06/12 12:09:06 by jovitor2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int	main(int i)
// {
// 	char str[] = {"abcdecdsesa"};
// 	i = ft_strlen(str);
// 	printf("A quantidade de char na string é : %d ", i);
// }