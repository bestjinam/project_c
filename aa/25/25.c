/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   25.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 18:36:09 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/06/12 18:40:39 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a[7];
	int	idx;
	int	sum;
	int	min;

	idx = 0;
	sum = 0;
	min = 2147483647;
	while (idx < 7)
	{
		scanf("%d", &a[idx]);
		if (a[idx] % 2 != 0)
		{
			sum += a[idx];
			if (a[idx] < min)
				min = a[idx];
		}
		idx ++;
	}
	printf("%d\n", sum);
	printf("%d\n", min);
	return (0);
}
