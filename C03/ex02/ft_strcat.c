/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvaroma <alvaroma@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 12:21:17 by alvaroma          #+#    #+#             */
/*   Updated: 2024/11/25 12:55:08 by alvaroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	str1 [50] = "Bar";
	char	str2 [] = "tolo";

	printf ("¿Quién tenía una flauta con un agujero 
sólo?: %s\n", ft_strcat(str1, str2));
	return (0);
}*/
