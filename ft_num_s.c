/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykaplien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 16:53:59 by ykaplien          #+#    #+#             */
/*   Updated: 2018/03/30 19:45:30 by ykaplien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_num_s(int n)
{
	int size;

	size = 0;
	if (n <= 0)
		size++;
	while (n)
	{
		n = n / 10;
		size++;
	}
	return (size);
}
