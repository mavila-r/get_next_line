/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:03:12 by mavila-r          #+#    #+#             */
/*   Updated: 2023/06/14 13:15:13 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char *get_next_line(int fd)
{
char		*line;
int			book;
static int	i;

line = malloc(/*Tamaño memoria que no sé como saco*/);
if (line == NULL)
	return (NULL);
book = read(fd, line, /*Tamaño memoria que no sé como saco*/);
if (book == -1)
	return (NULL);
while (file != '\0')
	{
		if (file != '\n')
		{
			line = file[i];
			i++;
		}
		else
			return (line);
	}
}

int main (void)
{
	
	return (0);
}