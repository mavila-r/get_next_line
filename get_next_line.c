/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:03:12 by mavila-r          #+#    #+#             */
/*   Updated: 2023/06/13 16:51:19 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char *get_next_line(int fd)
{
char	*line;

line = malloc(/*Tamaño memoria*/);
if (line == NULL)
	return (NULL);
read(fd, line, /*Tamaño memoria*/);

}
