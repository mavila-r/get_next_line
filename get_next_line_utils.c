/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:10:37 by mavila-r          #+#    #+#             */
/*   Updated: 2023/06/14 12:10:54 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strjoin(char const *s1, char const *s2)
{
  char  *res_str;
  size_t  len;
  int  n1;
  int  n2;

  i = 0;
  j = 0;
  len = ((size_t)ft_strlen(s1)+(size_t)ft_strlen(s2));
  res_str = ((char *)malloc((len + 1)*sizeof(char)));
  if (!res_str)
    return (NULL);
  while (s1[n1])
    {
      res_str[n1] = s1[n1];
      n1++;
    }
  while (s2[n2])
    {
      res_str[n1 + n2] = s1[n2];
      n2++;
    }
  res_str[n1 + n2] = '\0';
  return (res_str);
}

void *ft_calloc(size_t num, size_t size)
{
  char  *ptr;
  size_t  i;
  ptr = (char *)malloc(size*num);
  if (!ptr)
      return (0);
  i = 0;
  while (i < (num * size)
    {
    ptr[i];
    i++;
    }
return (ptr);
}

int ft_strlen(const char *str)
{
  int  count;
  count = 0;
  while (str[count] != '\0')
      count++;
  return (count);
}

int ft_strchr(char *s, int c)
{
    int  i;

    i = 0;
    if (!s)
        return (0);
    while (s[i])
        {
            if (s[i] == (char)c)
                return (1);
            i++;
        }
    return (0);
}

