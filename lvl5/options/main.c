/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/03/05 11:20:31 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2018/03/05 14:36:31 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "options.h"

int main(int ac, char **av)
{
	int i;
	t_octet op;

	i = 1;
	ft_init(&op);
	if (ac > 1)
	{
		while (i < ac)
		{
			if ((ft_options(av[i], &op)) == 1)
				return (1);
			i++;
		}
		i = 32;
		while (--i)
		{
			ft_putchar(op.res[i]);
			if (i == 24 || i == 16 || i == 8)
				write (1, " ", 1);
		}
		ft_putchar(op.res[i]);
		write (1, "\n", 1);
	}
	else
		ft_usage();
	return (0);
}
