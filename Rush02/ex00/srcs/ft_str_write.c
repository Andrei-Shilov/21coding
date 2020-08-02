/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_write.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltote <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 17:12:20 by ltote             #+#    #+#             */
/*   Updated: 2020/08/02 17:12:26 by ltote            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "ft_io.h"

void	ft_str_write_to(int fd, char *str)
{
	while (*str)
		write(fd, str++, 1);
}

void	ft_str_write(char *str)
{
	ft_str_write_to(OUT, str);
}
