/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_inside.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Teiki <Teiki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 09:33:27 by Teiki             #+#    #+#             */
/*   Updated: 2022/12/13 09:47:42 by Teiki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_inside(char c, const char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i++] == c)
			return (1);
	}
	return (0);
}
