/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   40.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 10:09:07 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/06/16 10:22:53 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	*stone;
	int	n;
	int	idx;

	scanf("%d", &n);
	stone = malloc(sizeof(int) * (n + 1));
	idx = 2;
	*(stone) = 1;
	*(stone + 1) = 2;
	while (idx <= n)
	{
		*(stone + idx) = *(stone + idx - 1) + *(stone + idx - 2);
		idx ++;
	}
	printf("%d\n", *(stone + n));
	return (0);
}
