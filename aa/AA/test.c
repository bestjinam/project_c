/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 14:36:19 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/06/16 16:53:52 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int		i;
	int		idx;
	char	*t;

	t = "abcdefghijklmnopqrstuvwxyz";
	idx = 0;
	while (t[idx])
	{
		i = t[idx] - 'a';
		while (i >= ('f' - 'a'))
			i = (i - ('f' - 'a'));
		printf("%c\n", i + 'a' );
		idx ++;
	}
	return (0);
}
