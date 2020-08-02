/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltote <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 17:40:06 by ltote             #+#    #+#             */
/*   Updated: 2020/08/02 17:40:10 by ltote            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STR_H
# define FT_STR_H

int		ft_str_join_get_final_length(char **strings, int size, int sep_length);
char	*ft_str_join(int size, char **strs, char *sep);

int		ft_str_length(char *str);

char	*ft_str_duplicate(char *src);
char	*ft_str_n_duplicate(char *src, int n);

char	*ft_str_copy(char *dest, char *src);
char	*ft_str_n_copy(char *dest, char *src, int n);

void	ft_str_write_to(int fd, char *str);
void	ft_str_write(char *str);

#endif
