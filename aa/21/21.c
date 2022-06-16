/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   21.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 18:00:46 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/06/13 16:03:25 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	idx;

	scanf("%d %d", &a, &b);
	idx = a;
	if (idx > b)
		idx = b;
	while (idx >= 1)
	{
		if (a % idx == 0 && b % idx == 0)
			break ;
		idx --;
	}
	printf("%d", idx);
	return (0);
}
