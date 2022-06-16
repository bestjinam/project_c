/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   45.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:53:15 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/06/16 15:49:13 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	set_std(int std[6][2])
{
	int	i;
	int	j;

	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 2)
		{
			std[i][j] = 0;
			j ++;
		}
		i ++;
	}
}

void	make_std(int n, int std[6][2])
{
	int	i;
	int	sex;
	int	grade;

	i = 0;
	while (i < n)
	{
		scanf("%d %d", &sex, &grade);
		std[grade - 1][sex] = std[grade - 1][sex] + 1;
		i ++;
	}
}

int	count_rooms(int k, int std[6][2])
{
	int	i;
	int	j;
	int	sum;

	i = 0;
	sum = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 2)
		{
			if (std[i][j] != 0 && std[i][j] % k != 0)
				sum += (std[i][j] / k) + 1;
			else if (std[i][j] != 0 && std[i][j] % k == 0)
				sum += std[i][j] / k;
			j ++;
		}
		i ++;
	}
	return (sum);
}

int	main(void)
{
	int	std[6][2];
	int	n;
	int	k;

	scanf("%d %d", &n, &k);
	set_std(std);
	make_std(n, std);
	printf("%d\n", count_rooms(k, std));
	return (0);
}
