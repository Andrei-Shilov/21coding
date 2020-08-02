/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_strict.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltote <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 17:26:48 by ltote             #+#    #+#             */
/*   Updated: 2020/08/02 17:26:56 by ltote            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_boolean.h"
#include "ft_is.h"
#include "ft_short_types.h"

ULNG	ft_atoi_strict(char *str)
{
	ULNG	result;

	while (ft_is_whitespace(*str))
		str++;
	result = 0;
	while (ft_is_number(*str))
	{
		result *= 10;
		result += (*str) - '0';
		str++;
	}
	if (*str == '\0')
		return (result);
	return (-1);
}
