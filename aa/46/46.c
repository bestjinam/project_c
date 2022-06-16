/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   46.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:53:15 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/06/16 16:24:26 by ggul_jam         ###   ########.fr       */
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
	int	rooms;

	i = 0;
	rooms = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 2)
		{
			sum = std[i][j] + std[i + 1][j];
			printf("(%d) %d + %d = %d\n", j, i, i + 1, sum);
			if (sum != 0 && sum % k != 0)
				rooms += (sum / k) + 1;
			else if (sum != 0 && sum % k == 0)
				rooms += sum / k;
			j ++;
		}
		i += 2;
	}
	return (rooms);
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
