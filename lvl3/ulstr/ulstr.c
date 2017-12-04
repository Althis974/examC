/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 15:06:31 by rlossy            #+#    #+#             */
/*   Updated: 2017/11/20 15:15:18 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ulstr(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 65 && s[i] <= 90)
			ft_putchar(s[i] + 32);
		else if (s[i] >= 97 && s[i] <= 122)
			ft_putchar(s[i] - 32);
		else
			ft_putchar(s[i]);
	i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		ulstr(av[1]);
	}
	ft_putchar('\n');
	return (0);
}
