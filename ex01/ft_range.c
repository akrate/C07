/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoussama <aoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:16:15 by aoussama          #+#    #+#             */
/*   Updated: 2024/09/17 10:11:41 by aoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*count;
	int	i;

	if (min >= max)
		return (NULL);
	count = (int *)malloc(sizeof(int) * (max - min));
	if (count == NULL)
		return (NULL);
	i = 0;
	while (max > min)
	{
		count[i++] = min;
		min++;
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