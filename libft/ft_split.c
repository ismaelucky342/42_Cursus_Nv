
#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	j;
	size_t	k;

	if (s == NULL)
		return (NULL);
	j = 0;
	k = 0;
	while (s[j])
		if (s[j++] != c && (s[j] == c || s[j] == '\0'))
			k++;
	split = (char **)malloc(sizeof(char *) * (k + 1));
	if (split == NULL)
		return (NULL);
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
	return (split);
}
