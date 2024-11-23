/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvaroma <alvaroma@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:16:43 by alvaroma          #+#    #+#             */
/*   Updated: 2024/11/08 14:00:21 by alvaroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	counter;

	counter = 97;
	while (counter >= 97 && counter <= 122)
	{
		write (1, &counter, 1);
		counter = counter +1;
	}
}
