/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvaroma <alvaroma@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:15:47 by alvaroma          #+#    #+#             */
/*   Updated: 2024/11/18 13:04:43 by alvaroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 15;
	b = 7;
	ft_div_mod (a, b, &div, &mod);
	printf ("Value of a: %i\n", a);
	printf ("Value of b: %i\n", b);
	printf ("Result: %i\n", div);
	printf ("Remainder : %i\n", mod);
	return (0);
}*/
