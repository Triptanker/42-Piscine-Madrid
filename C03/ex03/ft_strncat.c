/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvaroma <alvaroma@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:16:22 by alvaroma          #+#    #+#             */
/*   Updated: 2024/11/24 16:13:13 by alvaroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0' && i < nb)
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
	int		n = 3;

	printf ("¿Quién tenía una flauta con un agujero sólo?: %s\n",
 ft_strncat(str1, str2, n));
	return (0);
}*/
