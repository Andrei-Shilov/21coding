/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltote <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 17:25:56 by ltote             #+#    #+#             */
/*   Updated: 2020/08/02 17:26:00 by ltote            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int		ft_open_file(char *path)
{
	return (open(path, O_RDONLY));
}

int		ft_close_file(int fd)
{
	return (close(fd));
}
