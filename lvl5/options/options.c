/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   options.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/03/05 11:26:24 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2018/03/05 14:37:46 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "options.h"

int		ft_get_index(char c)
{
	if (c == 'a')
		return (0);
	if (c == 'b')
		return (1);
	if (c == 'c')
		return (2);
	if (c == 'd')
		return (3);
	if (c == 'e')
		return (4);
	if (c == 'f')
		return (5);
	if (c == 'g')
		return (6);
	if (c == 'i')
		return (8);
	if (c == 'j')
		return (9);
	if (c == 'k')
		return (10);
	if (c == 'l')
		return (11);
	if (c == 'm')
		return (12);
	if (c == 'n')
		return (13);
	if (c == 'o')
		return (14);
	if (c == 'p')
		return (15);
	if (c == 'q')
		return (16);
	if (c == 'r')
		return (17);
	if (c == 's')
		return (18);
	if (c == 't')
		return (19);
	if (c == 'u')
		return (20);
	if (c == 'v')
		return (21);
	if (c == 'w')
		return (22);
	if (c == 'x')
		return (23);
	if (c == 'y')
		return (24);
	if (c == 'z')
		return (25);
	return (-1);
}

void	ft_parse(char *s, t_octet *op)
{
	int i;

	i = 0;
	while (s[++i])
		op->res[ft_get_index(s[i])] = '1';
}

int		ft_options(char *s, t_octet *op)
{
	if ((ft_check_str(s, op)) == 1)
		return (1);
	if ((ft_check_str(s, op)) == -1)
		return (-1);
	if (op->usg)
	{
		ft_usage();
		return (1);
	}
	ft_parse(s, op);
	return (0);
}
