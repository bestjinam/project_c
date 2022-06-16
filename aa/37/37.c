/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   37.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 20:19:34 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/06/16 16:55:29 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	num[9];
	int	n;
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < 9)
		scanf("%d", (num + i++));
	scanf("%d", &n);
	i = -1;
	while (++i < n)
	{
		j = 0;
		tmp = *(num);
		while (j < 8)
		{
			*(num + j) = *(num + j + 1);
			j ++;
		}
		*(num + 8) = tmp;
	}
	i = -1;
	while (++i < 9)
		printf("%d ", *(num + i));
}
