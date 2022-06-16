/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   42.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 10:49:24 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/06/16 13:30:19 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	print_nums(int **num, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
			printf("%d ", num[i][j++]);
		printf("\n");
		i ++;
	}
}

int	main(void)
{
	int	n;
	int	**num;
	int	idx;
	int	idx2;

	scanf("%d", &n);
	num = malloc(sizeof(int *) * n);
	idx = 0;
	while (idx < n)
	{
		num[idx] = malloc(sizeof(int) * n);
		idx2 = 1;
		num[idx][0] = n - idx;
		while (idx2 < n)
		{
			num[idx][idx2] = num[idx][idx2 - 1] + n;
			idx2 ++;
		}
		idx ++;
	}
	print_nums(num, n);
	return (0);
}
