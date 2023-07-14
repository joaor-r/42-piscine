/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovitor2 <jovitor2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:36:11 by jovitor2          #+#    #+#             */
/*   Updated: 2023/06/07 18:07:32 by jovitor2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
char	*ft_strcapitalize(char *str)
{
	char	c;
	char	*temp;
	int		prox;

	temp = str;
	prox = 1;
	while (*temp)
	{
		c = *temp;
		if (prox == 1 && *temp >= 'a' && *temp <= 'z')
			*temp -= 32;
		else if (prox == 0 && *temp >= 'A' && *temp <= 'Z')
			*temp += 32;
		if ((c < 48 || c > 57) && (c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
			prox = 1;
		else
			prox = 0;
		temp++;
	}
	return (str);
}

// int	main(void)
// {
// 	char str[] = "salut,
//		comment tu vas ? 42mots quarante-deux; cinquante+et+un";

// 	printf("%s", ft_strcapitalize(str));
// 	return (0);
// }