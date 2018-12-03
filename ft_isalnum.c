/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srafe <srafe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 14:07:03 by srafe             #+#    #+#             */
/*   Updated: 2018/12/03 13:01:54 by srafe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	if ((a >= '0' && a <= '9') || (a >= 'a' && a <= 'z')
		|| (a >= 'A' && a <= 'Z'))
		return (1);
	else
		return (0);
}
