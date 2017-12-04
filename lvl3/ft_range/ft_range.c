/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 10:17:20 by rlossy            #+#    #+#             */
/*   Updated: 2017/11/20 11:28:38 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int *res;
	int len;
	int i;
	int j;

	len = end - start;
	if (len >= 0)
	{
		if ((res = (int*)malloc(sizeof(int) * (len + 1))) == NULL)
			return 0;
		i = 0;
		while (i <= len)
		{
			res[i] = start;
			start++;
			i++;
		}
		res[i] = '\0';
	}
	else
	{
		if ((res = (int*)malloc(sizeof(int) * ((len * -1) + 1))) == NULL)
			return 0;
		i = 0;
		j = 0;
		while (i >= len)
		{
			res[j] = start;
			start--;
			j++;
			i--;
		}
		res[j] = '\0';
	}
	return (res);
}
