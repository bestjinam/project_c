/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   14.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 14:45:09 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/06/12 14:52:21 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	max;
	int	sum;

	scanf("%d %d %d", &a, &b, &c);
	max = a;
	sum = b + c;
	if (max < b)
	{
		max = b;
		sum = c + a;
	}
	if (max < c)
	{
		max = c;
		sum = b + a;
	}
	if (sum > max)
		printf("YES");
	else
		printf("NO");
	return (0);
}
