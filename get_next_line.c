/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:03:12 by mavila-r          #+#    #+#             */
/*   Updated: 2023/10/24 16:58:28 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*get_line_out(char *acum_str)
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
	new_str = ft_calloc((ft_strlen(acum_str) - i + 1), sizeof(char));
	i++;
	j = 0;
	while (acum_str[i] != '\0')
		new_str[j++] = acum_str[i++];
	free (acum_str);
	if (new_str[0] == '\0')
	{
		free (new_str);
		return (NULL);
	}
	return (new_str);
}

static char	*get_this_line(char *acum_str)
{
	char	*line;
	int		i;

	i = 0;
	if (acum_str[i] == 0)
		return (NULL);
	while (acum_str[i] != '\0' && acum_str[i] != '\n')
		i++;
	line = ft_calloc((i + 2), sizeof(char));
	i = 0;
	while (acum_str[i] != '\0' && acum_str[i] != '\n')
	{
		line[i] = acum_str[i];
		i++;
	}
	if (acum_str[i] != '\0' && acum_str[i] != '\n')
		line[i++] = '\n';
	return (line);
}

static char	*get_ton(char *acum_str, char *buff)
{
	char	*r;

	r = ft_strjoin(acum_str, buff);
	free(acum_str);
	return (r);
}

static char	*get_a_lot(int fd, char *acum_str)
{
	char	*tmp;
	int		read_char;

	if (!acum_str)
		acum_str = ft_calloc(1, sizeof(char));
tmp = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	read_char = 1;
	while (read_char > 0)
	{
		read_char = read(fd, tmp, BUFFER_SIZE);
		if (read_char < 0)
		{
			free(tmp);
			return (NULL);
		}
		tmp[read_char] = '\0';
		acum_str = get_ton(acum_str, tmp);
		if (ft_strchr_mod(tmp, '\n'))
			break ;
	}
	free(tmp);
	return (acum_str);
}

char	*get_next_line(int fd)
{
	static char	*acum_str;
	char		*actual_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (read(fd, 0, 0) < 0)
	{
		if (acum_str != NULL)
		{
			free(acum_str);
			acum_str = NULL;
		}
		return (NULL);
	}
acum_str = get_a_lot(fd, acum_str);
actual_line = get_this_line(acum_str);
acum_str = get_line_out(acum_str);
	return (actual_line);
}

/* int main (void)
{
	
	return (0);
} */