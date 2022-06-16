/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   36.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 20:12:21 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/06/15 20:18:14 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	n;
	int	*num;
	int	idx;

	scanf("%d", &n);
	num = malloc(sizeof(int) * n);
	idx = 0;
	while (idx < n)
		scanf("%d", (num + idx ++));
	idx --;
	while (idx >= 0)
		printf("%d ", *(num + idx --));
	return (0);
}
