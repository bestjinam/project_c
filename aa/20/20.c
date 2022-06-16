/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   20.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:56:54 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/06/12 18:00:12 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a;
	int	idx;

	idx = 2;
	scanf("%d", &a);
	while (idx * idx < a)
	{
		if (a % idx == 0)
		{
			printf("NO\n");
			return (0);
		}
		idx ++;
	}
	printf("YES\n");
	return (0);
}