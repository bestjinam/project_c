/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 13:54:33 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/06/16 16:58:18 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a;

	scanf("%d", &a);
	if (a % 2 == 0)
		printf("YES\n");
	else
		printf("NO\n");
	return (0);
}