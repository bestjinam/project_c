/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 13:56:25 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/06/12 14:42:09 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a;

	scanf("%d", &a);
	if (a % 2 == 0)
		printf("even\n");
	else if (a == 0)
		printf("zero\n");
	else
		printf("odd\n");
	return (0);
}
