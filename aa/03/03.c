/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 12:45:31 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/06/11 12:47:59 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	res1;
	int	res2;

	scanf("%d", &a);
	scanf("%d", &b);
	res1 = a / b;
	res2 = a % b;
	printf("%d %d", res1, res2);
	return (0);
}
