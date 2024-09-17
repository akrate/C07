/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoussama <aoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:16:12 by aoussama          #+#    #+#             */
/*   Updated: 2024/09/17 18:49:47 by aoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	str_cpy(char *test, char **s, char *sep, int size)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (s[i][j] != '\0')
			test[k++] = s[i][j++];
		j = 0;
		if (i < (size -1))
		{
			while (sep[j])
				test[k++] = sep[j++];
		}
		i++;
	}
	test[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		countstr;
	int		countsep;
	char	*test;

	i = 0;
	countstr = 0;
	countsep = str_len(sep);
	while (i < size)
	{
		countstr += str_len(strs[i]);
		i++;
	}
	test = (char *)malloc(sizeof(char)
			* ((countstr + 1) + (countsep * (size - 1))));
	str_cpy(test, strs, sep, size);
	return (test);
}
/*int main()
{
	char *s[] = {"hhh"};
	char *l = "---";
	printf("%s",ft_strjoin(1, s, l));
}*/