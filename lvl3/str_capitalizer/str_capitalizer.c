/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 10:45:33 by exam              #+#    #+#             */
/*   Updated: 2017/11/21 11:21:09 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}

void	cap(char *s)
{
	int i;
	int first;

	i = 0;
	while (s[i] != '\0')
	{
		first = 0;
		while ((s[i] == ' ' || s[i] == '\t') && s[i] != '\0')
			i++;
		while (s[i] != ' ' && s[i] != '\t' && s[i] != '\0')
		{
			if (s[i] >= 97 && s[i] <= 122 && first == 0)
			{
				s[i] -= 32;
				first = 1;
				i++;
			}
			else if (s[i] >= 65 && s[i] <= 90 && first == 0)
			{
				first = 1;
				i++;
			}
			else
				first = 1;
			if (s[i] >= 65 && s[i] <= 90 && first == 1)
			{
				s[i] += 32;
			}
			i++;
		}
	}
}

int		main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			cap(av[i]);
			ft_putstr(av[i]);
			ft_putchar('\n');
			i++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
