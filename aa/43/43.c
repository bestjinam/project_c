/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   43.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:31:56 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/06/16 14:01:32 by ggul_jam         ###   ########.fr       */
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
		{
			printf("%d ", num[i][j]);
			j ++;
		}
		printf("\n");
		i ++;
	}
}

int	main(void)
{
	int	n;
	int	**num;
	int	idx1;
	int	idx2;
	int	i;

	i = 1;
	idx1 = 0;
	scanf("%d", &n);
	num = malloc(sizeof(int *) * n);
	while (idx1 < n)
	{
		num[idx1] = malloc(sizeof(int *) * n);
		idx2 = idx1;
		while (idx2 >= 0)
		{
			num[idx1][idx2] = i;
			i ++;
			idx2 --;
		}
		idx1 ++;
	}
	print_nums(num, n);
}
