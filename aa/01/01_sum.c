/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_sum.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 11:38:00 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/06/16 16:56:03 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	my_putnbr(int nbr)
{
	long	tmp;
	char	num[10000];
	int		idx;

	tmp = (long) nbr;
	if (nbr < 0)
		tmp *= -1;
	idx = 0;
	while (tmp)
	{
		*(num + idx) = (tmp % 10) + '0';
		tmp = tmp / 10;
		idx ++;
	}
	if (idx < 0)
		*(num + idx) = '-';
	while (idx > 0)
		write(1, &num[--idx], 1);
}

int	main(void)
{
	int	res;
	int	a;
	int	b;

	scanf("%d", &a);
	scanf("%d", &b);
	res = a + b;
	my_putnbr(res);
	return (0);
}
