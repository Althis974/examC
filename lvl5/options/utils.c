/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   utils.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/03/05 11:23:33 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2018/03/05 14:37:48 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "options.h"

void	ft_usage(void)
{
	write (1, "options: abcdefghijklmnopqrstuvwxyz\n", 36);
}

void	ft_putchar(int c)
{
	write (1, &c, 1);
}

void	ft_error(void)
{
	write (1, "Invalid Option\n", 15);
}

int		ft_check_str(char *s, t_octet *op)
{
	int i;

	i = 0;
	if (s[i] == '-')
		i++;
	else
		return (-1);
	while (s[i])
	{
		if (s[i] == 'h')
			op->usg = 1;
		if (s[i] < 'a' || s[i] > 'z')
		{
			ft_error();
			return (1);
		}
		i++;
	}
	return (0);
}

void	ft_init(t_octet *op)
{
	op->res[0] = '0';
	op->res[1] = '0';
	op->res[2] = '0';
	op->res[3] = '0';
	op->res[4] = '0';
	op->res[5] = '0';
	op->res[6] = '0';
	op->res[7] = '0';
	op->res[8] = '0';
	op->res[9] = '0';
	op->res[10] = '0';
	op->res[11] = '0';
	op->res[12] = '0';
	op->res[13] = '0';
	op->res[14] = '0';
	op->res[15] = '0';
	op->res[16] = '0';
	op->res[17] = '0';
	op->res[18] = '0';
	op->res[19] = '0';
	op->res[20] = '0';
	op->res[21] = '0';
	op->res[22] = '0';
	op->res[23] = '0';
	op->res[24] = '0';
	op->res[25] = '0';
	op->res[26] = '0';
	op->res[27] = '0';
	op->res[28] = '0';
	op->res[29] = '0';
	op->res[30] = '0';
	op->res[31] = '0';
	op->usg = 0;
}
