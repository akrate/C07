/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoussama <aoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:46:42 by aoussama          #+#    #+#             */
/*   Updated: 2024/09/17 12:47:46 by aoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*count;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	count = (int *)malloc(sizeof(int) * (max - min));
	if (count == NULL)
		return (0);
	while (max > min)
	{
		count[i++] = min;
		min++;
	}
	*range = count;
	return (i);
}
/*#include <stdio.h>
int main()
{
	int *oussama;
	printf("%d",ft_range(&oussama,-10, 59));
}*/