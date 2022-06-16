/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   38.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 20:48:08 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/06/16 16:57:36 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	n;
	int	*num;
	int	idx;
	int	idx2;
	int	tmp;

	scanf("%d", &n);
	idx = 1;
	num = malloc(sizeof(int) * (n + 1));
	while (idx < n + 1)
		scanf("%d", (num + idx ++));
	scanf("%d", num);
	idx = 0;
	while (idx < n)
	{
		idx2 = -1;
		while (++idx2 <= n + 1)
		{
			if (*(num + idx) > *(num + idx + 1))
			{
				tmp = *(num + idx);
				*(num + idx) = *(num + idx + 1);
				*(num + idx++ + 1) = tmp;
			}
		}
	}
	idx = 0;
	while (idx < n + 1)
		printf("%d ", *(num + idx ++));
}
