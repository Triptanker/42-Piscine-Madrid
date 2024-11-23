/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvaroma <alvaroma@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:34:01 by alvaroma          #+#    #+#             */
/*   Updated: 2024/11/21 16:16:55 by alvaroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*upper;
	int		i;

	i = 0;
	upper = str;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = (str[i] + 32);
		}
		i++;
	}
	return (upper);
}

/*int	main(void)
{
	char	str1[] = "Albaro no se escribe";
	ft_strlowcase(str1);
	printf("%s", ft_strlowcase(str1));
	return (0);
}*/
