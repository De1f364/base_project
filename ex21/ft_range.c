/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 20:33:42 by neddison          #+#    #+#             */
/*   Updated: 2019/04/03 21:02:45 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*int_arr;
	int		i;

	i = 0;
	if (min >= max)
		return (NULL);
	int_arr = (int *)malloc(sizeof(int) * (max - min));
	if (int_arr == NULL)
		return (NULL);
	while (min < max)
	{
		int_arr[i] = min;
		min++;
		i++;
	}
	return (int_arr);
}
