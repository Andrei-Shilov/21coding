/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_dictionary_sort2.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltote <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 17:22:01 by ltote             #+#    #+#             */
/*   Updated: 2020/08/02 17:22:12 by ltote            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_number_dictionary.h"

int		ft_sort_dict_f_normal(t_dict_entry *a, t_dict_entry *b)
{
	return (a->normal > b->normal);
}

int		ft_sort_dict_f_value(t_dict_entry *a, t_dict_entry *b)
{
	return (a->value > b->value);
}
