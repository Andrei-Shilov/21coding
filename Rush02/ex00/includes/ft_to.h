/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltote <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 17:40:36 by ltote             #+#    #+#             */
/*   Updated: 2020/08/02 17:40:44 by ltote            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TO_H
# define FT_TO_H

# include <ft_boolean.h>

# include "ft_short_types.h"

int		ft_atoi(char *str);

ULNG	ft_atoi_strict(char *str);

t_bool	ft_itow(t_dict *dict, ULNG number, t_bool *put_space, t_bool print);

#endif
