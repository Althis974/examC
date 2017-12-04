/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   check.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/04 11:06:51 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2017/12/04 13:03:02 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "brackets.h"

int		ft_check_par(char *s, int index)
{
	int i;

	i = index;
	while (s[i])
	{
		if (s[i] == ')')
			return (i);
		if (s[i] == '[')
			if (!(i = ft_check_cro(s, i)))
				return (0);
		if (s[i] == '{')
			if (!(i = ft_check_acc(s, i)))
				return (0);
		i++;
	}
	return (0);
}

int     ft_check_acc(char *s, int index)
{
	int i;

	i = index;
	while (s[i])
	{
		if (s[i] == '}')
			return (i);
		if (s[i] == '[')
			if (!(i = ft_check_cro(s, i)))
				return (0);
		if (s[i] == '(')
			if (!(i = ft_check_par(s, i)))
				return (0);
		i++;
	}
	return (0);
}

int     ft_check_cro(char *s, int index)
{
	int i;

	i = index;
	while (s[i])
	{
		if (s[i] == ']')
			return (i);
		if (s[i] == '(')
			if (!(i = ft_check_par(s, i)))
				return (0);
		if (s[i] == '{')
			if (!(i = ft_check_acc(s, i)))
				return (0);
		i++;
	}
	return (0);
}

int		ft_count(char *s)
{
	int		paro;
	int		acco;
	int		croo;
	int		parf;
	int		accf;
	int		crof;
	int		i;

	i = 0;
	paro = 0;
	acco = 0;
	croo = 0;
	parf = 0;
	accf = 0;
	crof = 0;
	while (s[i])
	{
		if (s[i] == '(')
			paro++;
		if (s[i] == '[')
			croo++;
		if (s[i] == '{')
			acco++;
		if (s[i] == ')')
			parf++;
		if (s[i] == ']')
			crof++;
		if (s[i] == '}')
			accf++;
		i++;
	}
	if (paro == parf && croo == crof && acco == accf)
		return (1);
	return (0);
}
