/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvaroma <alvaroma@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:37:04 by alvaroma          #+#    #+#             */
/*   Updated: 2024/11/21 16:15:51 by alvaroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*upper;
	int		i;

	i = 0;
	upper = str;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = (str[i] - 32);
		}
		i++;
	}
	return (upper);
}

/*int	main(void)
{
	char	str1[] = "Albaro no se escribe";
	ft_strupcase(str1);
	printf("%s", ft_strupcase(str1));
	return (0);
}*/
