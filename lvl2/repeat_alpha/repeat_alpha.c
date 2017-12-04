/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 09:53:04 by rlossy            #+#    #+#             */
/*   Updated: 2017/11/20 10:05:21 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	rpa(char *s)
{
	int i;
	int j;

	if (!s)
		return ;
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 65 && s[i] <= 90)
		{
			j = s[i] - 65;
			while (j >= 0)
			{
				ft_putchar(s[i]);
				j--;
			}
		}
		else if (s[i] >= 97 && s[i] <= 122)
		{
			j = s[i] - 97;
			while (j >= 0)
			{
				ft_putchar(s[i]);
				j--;
			}
		}
		else
			ft_putchar(s[i]);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		rpa(av[1]);
	}
	ft_putchar('\n');
	return (0);
}
