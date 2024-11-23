/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvaroma <alvaroma@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:55:30 by alvaroma          #+#    #+#             */
/*   Updated: 2024/11/22 11:08:59 by alvaroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest [i] = src [i];
		i++;
	}
	dest [i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	str1 [20];
	char	*str2;

	str2 = "Hola";
	ft_strcpy(str1, str2);
	printf ("Now str1 says : %s\n", str1);
	return (0);
}*/
