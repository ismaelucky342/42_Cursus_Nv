/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-migu <rde-migu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:45:46 by rde-migu          #+#    #+#             */
/*   Updated: 2024/01/31 13:24:16 by rde-migu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_str(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
		if (*s++ != c && (*s == c || *s == '\0'))
			count++;
	return (count);
}

void	create_substr(char **split, const char *s, char c)
{
	size_t	i;
	size_t	k;
	size_t	j;

	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = i;
			while (s[j] != c && s[j] != '\0')
				j++;
			split[k++] = ft_substr(s, i, j - i);
			i = j;
		}
		else
			i++;
	}
	split[k] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	count;

	if (s == NULL)
		return (NULL);
	count = count_str(s, c);
	split = (char **)malloc(sizeof(char *) * (count + 1));
	if (split == NULL)
		return (NULL);
	create_substr(split, s, c);
	return (split);
}
