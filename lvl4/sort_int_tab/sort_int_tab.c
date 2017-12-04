/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 12:44:29 by rlossy            #+#    #+#             */
/*   Updated: 2017/11/20 13:09:52 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
