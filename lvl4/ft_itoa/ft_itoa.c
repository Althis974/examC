/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/04 10:12:14 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2017/12/05 09:47:52 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		i;

	len = ft_strlen(src);
	if ((dest = (char*)malloc(sizeof(char) * len)) == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_abs(int n)
{
	return (n < 0 ? -n : n);
}

int		get_len(int n)
{
	int len;

	len = 1;
	while (n /= 10)
		len++;
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*res;
	int		val;
	int		len;
	int		i;

	if (nbr == -2147483648)
		return (ft_strdup("-2147483648"));
	val = ft_abs(nbr);
	len = get_len(val);
	if (nbr < 0)
		len++;
	if ((res = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	i = 0;
	while (i++ < len)
	{
		res[len - i] = val % 10 + '0';
		val /= 10;
	}
	if (nbr < 0)
		res[0] = '-';
	res[len] = '\0';
	return (res);
}
