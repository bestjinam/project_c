/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   47.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:28:08 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/06/16 16:30:51 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	prntstar(int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j <= i)
		{
			printf("*");
			j ++;
		}
		printf("\n");
		i ++;
	}
}

int	main(void)
{
	int	n;

	scanf("%d", &n);
	prntstar(n);
	return (0);
}
