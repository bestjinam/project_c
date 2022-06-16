/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   50.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:42:11 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/06/16 16:51:34 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	min(int *tmp, int size)
{
	int	m;

	m = 2147483647;
	while (size > 0)
	{
		if (m > *tmp)
			m = *tmp;
		tmp ++;
		size --;
	}
	return (m);
}

int	main(void)
{
	int	n;
	int	i;
	int	*num;

	scanf("%d", &n);
	num = malloc(sizeof(int) * n);
	i = 0;
	while (i < n)
	{
		scanf("%d", &num[i]);
		i ++;
	}
	printf("%d\n", min(num, n));
}
