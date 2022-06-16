/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   27.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 18:58:47 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/06/12 19:03:44 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a[7];
	int	idx;
	int	cnt;
	int	day;

	idx = 0;
	cnt = 0;
	scanf("%d", &day);
	while (idx < 7)
	{
		scanf("%d", &a[idx]);
		if (day == a[idx] % 10)
			cnt ++;
		idx++;
	}
	printf("%d\n", cnt);
	return (0);
}
