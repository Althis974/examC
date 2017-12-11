/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 12:44:29 by rlossy            #+#    #+#             */
/*   Updated: 2017/12/11 16:19:46 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	sort_int_tab(int *tab, unsigned int size)
{
	int i;
	unsigned int j;
	unsigned int len;

	i = 0;
	j = 1;
	len = 0;
	while (len < size)
	{
		while (j < size)
		{
			if (tab[i] < tab[j])
				swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
		len++;
		j = 0;
	}
}

int main(void)
{
	int tab[10] = {1, 5, 4, 2, 2, -5, -2, 8, 10, -5};
	int size = 10;
	int i = 0;

	sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
