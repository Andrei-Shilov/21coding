/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_utils.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltote <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 17:37:38 by ltote             #+#    #+#             */
/*   Updated: 2020/08/02 17:37:42 by ltote            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILE_UTILS_H
# define FT_FILE_UTILS_H

# define SIZE_1B 1
# define SIZE_1K 1024

int		ft_open_file(char *path);

int		ft_close_file(int fd);

#endif
