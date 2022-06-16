/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   39.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 21:04:50 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/06/16 10:42:18 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	sum_seven(int i, int j, int *dwf)
{
	int	idx;
	int	sum;

	idx = 0;
	sum = 0;
	while (idx < 9)
	{
		if (idx != i && idx != j)
			sum += dwf[idx];
		idx ++;
	}
	return (sum);
}

void	print_seven(int i, int j, int *dwf)
{
	int	idx;

	idx = 0;
	while (idx < 9)
	{
		if (idx != i && idx != j)
			printf("%d ", dwf[idx]);
		idx ++;
	}
	printf("\n");
}

int	main(void)
{
	int	dwf[9];
	int	idx;
	int	idx2;

	idx = 0;
	while (idx < 9)
		scanf("%d", (dwf + idx++));
	idx = 0;
	while (idx < 9)
	{
		idx2 = idx + 1;
		while (idx2 < 9)
		{
			if (sum_seven(idx, idx2, dwf) == 100)
			{
				print_seven(idx, idx2, dwf);
				break ;
			}
			idx2 ++;
		}
		idx ++;
	}
	return (0);
}
