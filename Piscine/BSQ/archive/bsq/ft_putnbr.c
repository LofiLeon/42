/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrimmei <lgrimmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 09:09:35 by lgrimmei          #+#    #+#             */
/*   Updated: 2023/03/01 09:09:48 by lgrimmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_putnbr(int nb)
{
	long int	lnb;
	char		c;

	lnb = nb;
	if (lnb < 0)
	{
		lnb = lnb * (-1);
		write(1, "-", 1);
	}
	c = lnb % 10 + '0';
	if (lnb >= 10)
	{
		ft_putnbr(lnb / 10);
	}
	write (1, &c, 1);
}