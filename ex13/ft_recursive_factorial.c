/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 21:27:15 by neddison          #+#    #+#             */
/*   Updated: 2019/04/02 21:51:07 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int		fact;

	fact = 1;
	if (nb >= 1 && nb <= 12)
	{
		fact = nb * ft_recursive_factorial(nb - 1);
		return (fact);
	}
	else if (nb == 0 || nb == 1)
		return (1);
	else
		return (0);
}
