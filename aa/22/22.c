/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   22.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 18:24:22 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/06/12 18:26:58 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	scanf("%d", &a);
	b = 0;
	while (b++ < 9)
		printf("%d * %d = %d\n", a, b, a * b);
	return (0);
}