/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   32.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:47:34 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/06/13 19:36:39 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;
	int	j;

	scanf("%d", &n);
	if (n % 2 == 0)
		return (0);
	i = 0;
	while (i < n / 2 + 1)
	{
		j = 0;
		while (j < n / 2 + 1 - i)
		{
			printf(" ");
			j ++;
		}
		j = 0;
		while (j <= i)
		{
			printf("@");
			j ++;
		}
		i ++;
		printf("\n");
	}
	i = 1;
	while (i < n / 2 + 1)
	{
		j = 0;
		while (j <= i)
		{
			printf(" ");
			j ++;
		}
		j = 0;
		while (j < n / 2 + 1 - i)
		{
			printf("@");
			j ++;
		}
		i ++;
		printf("\n");
	}
	return (0);
}
