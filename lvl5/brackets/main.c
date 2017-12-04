/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/04 11:27:32 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2017/12/04 12:48:43 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "brackets.h"

void	ft_error(void)
{
	write(1, "Error\n", 6);
}

void	ft_correct(void)
{
	write(1, "OK\n", 3);
}

void	ft_brackets(char *s)
{
	int i;

	if (!(ft_count(s)))
	{
		ft_error();
		return ;
	}
	i = 0;
	while (s[i])
	{
		if (s[i] == '(')
			if (!(ft_check_par(s, i)))
			{
				ft_error();
				return ;
			}
		if (s[i] == '[')
			if (!(ft_check_cro(s, i)))
			{
				ft_error();
				return ;
			}
		if (s[i] == '{')
			if (!(ft_check_acc(s, i)))
			{
				ft_error();
				return ;
			}
		i++;
	}
	ft_correct();
}

int		main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			ft_brackets(av[i]);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
