/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvaroma <alvaroma@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:26:34 by alvaroma          #+#    #+#             */
/*   Updated: 2024/11/09 15:13:27 by alvaroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	counter;

	counter = 122;
	while (counter >= 97 && counter <= 122)
	{
		write (1, &counter, 1);
		counter = counter -1;
	}
}
