/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 13:24:25 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/06/11 13:47:09 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a;
	int	res;

	scanf("%d", &a);
	res = a / 12;
	if ((a % 12) > 0)
		res = res + 1;
	else
		res = a / 12;
	printf("%d", res);
}