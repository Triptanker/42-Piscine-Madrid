/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvaroma <alvaroma@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:56:57 by alvaroma          #+#    #+#             */
/*   Updated: 2024/11/24 16:04:10 by alvaroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n -1 && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if (n == 0)
		return (0);
	else
		return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	str1[] = "Alvaro ";
	char	str2[] = "Alvaro0";
	int		n = 7;

	ft_strncmp(str1, str2, n);
	printf("El resultado es: %d\n", ft_strncmp(str1, str2, n));
	return (0);
}*/
