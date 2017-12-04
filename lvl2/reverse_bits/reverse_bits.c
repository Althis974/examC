/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlossy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 10:12:34 by rlossy            #+#    #+#             */
/*   Updated: 2017/11/20 10:15:52 by rlossy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char res;
	int count;

	res = 0;
	count = 8;
	while (count)
	{
		res = res * 2 + (unsigned char)(octet % 2);
		octet = octet / 2;
		count--;
	}
	return (res);
}
