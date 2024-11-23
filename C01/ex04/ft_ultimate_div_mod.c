/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvaroma <alvaroma@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:39:24 by alvaroma          #+#    #+#             */
/*   Updated: 2024/11/18 12:56:44 by alvaroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	res1;
	int	res2;

	res1 = *a / *b;
	res2 = *a % *b;
	*a = res1;
	*b = res2;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 15;
	b = 7;
	printf ("First value of a: %i\n", a);
	printf ("First value of b: %i\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf ("Result in a: %i\n", a);
	printf ("Remainder in b: %i\n", b);
	return (0);
}*/
