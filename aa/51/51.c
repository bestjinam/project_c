/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   51.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:59:58 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/06/16 17:08:22 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	set_tbl(int **std, int n)
{
	int	i;
	int	j;
	int	max_math;
	int	c;

	i = 0;
	max_math = 0;
	while (i < n)
	{
		std[i] = malloc(sizeof(int) * 4);
		j = 0;
		while (j < 4)
		{
			scanf("%d", &std[i][j]);
			j ++;
		}
		if (std[i][1] > max_math)
		{
			max_math = std[i][1];
			c = std[i][3];
		}
		i ++;
	}
	return (c);
}

int	main(void)
{
	int	n;
	int	**std;
	int	res;

	scanf("%d", &n);
	std = malloc(sizeof(int *) * n);
	res = set_tbl(std, n);
	printf("%d\n", res);
}
