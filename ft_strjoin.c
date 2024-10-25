/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <souaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:39:09 by souaammo          #+#    #+#             */
/*   Updated: 2024/10/25 11:49:24 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcat(char *dst, const char *src)
{
	size_t	d_len;
	size_t	i;

	d_len = ft_strlen(dst);
	for (i = 0; src[i]; i++)
	{
		dst[d_len + i] = src[i];
	}
	dst[d_len + i] = '\0';
	return (dst);
}

static char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	for (i = 0; src[i]; i++)
	{
		dst[i] = src[i];
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	res = (char *)ft_calloc(sizeof(char), ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!res)
		return (NULL);
	ft_strcpy(res, s1);
	ft_strcat(res, s2);
	return (res);
}