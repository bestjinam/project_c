/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   48.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:31:19 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/06/16 16:37:32 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_prime(int a)
{
	int	i;

	i = 3;
	if (a < 2)
		return (0);
	else if (a == 2)
		return (1);
	if (a % 2 == 0)
		return (0);
	while (i * i <= a)
	{
		if (a % i == 0)
			return (0);
		i ++;
	}
	return (1);
}

int	main(void)
{
	int	n;
	int	idx;
	int	a;

	scanf("%d", &n);
	idx = 0;
	while (idx < n)
	{
		scanf("%d", &a);
		if (is_prime(a))
			printf("%d ", a);
		idx ++;
	}
	return (0);
}
