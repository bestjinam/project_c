/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   44.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:02:14 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/06/16 14:14:43 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	make_num(int **num, int n)
{
	int	i;
	int	idx;
	int	idx2;

	idx = 0;
	i = 1;
	while (idx < n)
	{
		num[idx] = malloc(sizeof(int) * n);
		idx2 = idx;
		if (idx2 < n - 1 - idx2)
		{
			num[idx][idx2] = i ++;
			num[idx][n - 1 - idx2] = i ++;
		}
		else if (idx2 > n - 1 - idx2)
		{
			num[idx][n - 1 - idx2] = i ++;
			num[idx][idx2] = i ++;
		}
		else if (idx2 == n - 1 - idx2)
			num[idx][idx2] = i ++;
		idx ++;
	}
}

void	print_num(int **num, int n)
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

	scanf("%d", &n);
	num = malloc(sizeof(int *) * n);
	if (!num)
		return (0);
	make_num(num, n);
	print_num(num, n);
}
