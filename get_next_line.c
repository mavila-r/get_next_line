/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:03:12 by mavila-r          #+#    #+#             */
/*   Updated: 2023/07/11 16:26:12 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char *get_line_out()
{
	int		i;
	int		j;
	char	*new_str;

	i = 0;
	while (acum_str[i] != '\0' && acum_str[i] != '\n')
		i++;
	if (acum_str[i] == '\0')
		{
			free (acum_str);
			return (NULL);
		}
	line = ft_calloc((ft_strlen(acum_str) - i + 1), sizeof(char));
	i++;
	j = 0;
	while (acum_str[i] != '\0')
		new_str[j++] = acum_str[i++];
	free (acum_str);
	if (str[0] == '\0')
		{
			free (new_str);
			return (NULL);
		}
	return (new_str);
}

static char *get_this_line(char *acum_str)
{
	char	*line;
	int		i;

	i = 0;
	
}

static char *get_ton()
{
	
}


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