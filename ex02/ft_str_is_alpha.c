/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor2 <jovitor2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:57:12 by jovitor2          #+#    #+#             */
/*   Updated: 2023/06/07 14:48:05 by jovitor2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_str_is_alpha(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// 65-90 97 >122

// int main()
// {
//     int result;

//     result = ft_str_is_alpha("asdf");
//     printf("Result asdf: %d\n", result);

//     result = ft_str_is_alpha("QWERTY");
//     printf("Result QWERTY : %d\n", result);

//     result = ft_str_is_alpha("asdf1234");
//     printf("Result asdf1234 : %d\n", result);

//     result = ft_str_is_alpha("999");
//     printf("Result 999: %d\n", result);

//     result = ft_str_is_alpha("");
//     printf("Result : %d\n", result);

//     return (0);
// }