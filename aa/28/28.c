/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   28.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 19:05:50 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/06/12 19:15:07 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	n;
	int	*school;
	int	*apple;
	int	sum;
	int	idx;

	scanf("%d", &n);
	school = malloc(sizeof(int) * n);
	apple = malloc(sizeof(int) * n);
	idx = 0;
	sum = 0;
	if (!school || !apple)
		return (0);
	while (idx < n)
	{
		scanf("%d %d", &school[idx], &apple[idx]);
		sum += apple[idx] % school[idx];
		idx ++;
	}
	printf("%d\n", sum);
	return (0);
}
