/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoussama <aoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:16:15 by aoussama          #+#    #+#             */
/*   Updated: 2024/09/17 09:40:08 by aoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*count;
	int	i;

	i = 0;
	if (min > max)
		return (NULL);
	count = (int *)malloc(sizeof(int) * max - min);
	if (!count)
		return (NULL);
	while (i < max - min)
	{
		count[i] = min + i;
		i++;
	}
	return (count);
}
/*int main()
{
	int *oussama = ft_range(5, 15);
	int i = 0;
	while(i < 10)
	{
		printf("%d, ",oussama[i]);
		i++;
	}
}*/