/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa_base.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/04 17:05:52 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2017/12/04 17:21:58 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char *dest;
	int len;
	int i;

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

int		ft_abs(int val)
{
	return (val < 0 ? -val : val);
}

int		get_len(int val, int base)
{
	int len;

	len = 1;
	while (val /= base)
		len++;
	return (len);

}

char	*ft_itoa_base(int value, int base)
{
	char *res;
	int val;
	int len;
	char	hex[16] = "0123456789ABCDEF";
	int i;

	if (value == -2147483648)
		return (ft_strdup("-2147483648"));
	val = ft_abs(value);
	len = get_len(val, base);
	if (value < 0 && base == 10)
		len++;
	if ((res = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	i = 0;
	while (i++ < len)
	{
		res[len - i] = hex[val % base];
		val /= base;
	}
	if (value < 0 && base == 10)
		res[0] = '-';
	res[len] = '\0';
	return (res);
}
