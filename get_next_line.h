/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <kakigoori00007@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 17:14:15 by etakaham          #+#    #+#             */
/*   Updated: 2023/07/02 17:41:44 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFA_SIZE
# define BUFFA_SIZE 1
# endif

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <unistd.h>
# include <fcntl.h>

size_t	ft_strlen(const char *s);
bool	ft_is_include_newline(const char *s);
char	*ft_strjoin(char *s1, const char *s2);
char	*ft_copy_newline_before(char *read_data);
char	*ft_copy_newline_after(char *read_data);
char	*ft_read(int fd, char *read_data, bool *is_finish);
int		helper(ssize_t *read_size, char *tmp_read_data, int fd);
void	helper_2(ssize_t read_size, bool *is_finish, char *tmp_read_data);
char	*helper_3(char *s1, char *s2);
char	*get_next_line(int fd);

#endif
