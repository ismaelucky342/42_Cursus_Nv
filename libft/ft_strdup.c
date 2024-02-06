
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*duplicate;

	len = ft_strlen(s1) + 1;
	duplicate = (char *)malloc(len);
	if (duplicate == NULL)
	{
		return (NULL);
	}
	ft_memcpy(duplicate, s1, len);
	return (duplicate);
}
