/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_debug.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltote <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 17:26:24 by ltote             #+#    #+#             */
/*   Updated: 2020/08/02 17:26:29 by ltote            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_number_dictionary.h"

void	debug_dump_dictionary(t_dict dict)
{
	int		index;

	index = 0;
	while (index < dict.size)
	{
		printf("dict.entries[%d]\n", index);
		printf("    | value : %lu\n", dict.entries[index].value);
		printf("    | str   : $%s$\n", dict.entries[index].str);
		index++;
	}
	fflush(stdout);
}
