/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 21:07:47 by neddison          #+#    #+#             */
/*   Updated: 2019/04/03 18:30:22 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		fact;

	fact = 1;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb >= 2 && nb <= 12)
	{
		while (nb != 1)
		{
			fact = fact * nb;
			nb--;
		}
		return (fact);
	}
	else
		return (0);
}
