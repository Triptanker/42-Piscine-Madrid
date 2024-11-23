/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvaroma <alvaroma@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:56:59 by alvaroma          #+#    #+#             */
/*   Updated: 2024/11/19 15:40:06 by alvaroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	n;

	n = *a;
	*a = *b;
	*b = n;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*ptr1;
	int	*ptr2;

	a = 30;
	b = 13;
	ptr1 = &a;
	ptr2 = &b;
	printf ("Valor inicial de a: %d\n", a);
	printf ("Valor inicial de b: %d\n", b);
	ft_swap(&a, &b);
	printf ("El nuevo valor de a es: %d\n", a);
	printf ("El nuevo valor de b es: %d\n", b);
	return (0);
}*/
