
#include "libft.h"

int	ft_memcmp(const void *dst, const void *str, size_t n)
{
	size_t			i;
	int				diff;
	unsigned char	*str2;
	unsigned char	*dst2;

	dst2 = (unsigned char *)dst;
	str2 = (unsigned char *)str;
	i = 0;
	diff = 0;
	if (n)
		while (i < n)
		{
			diff = dst2[i] - str2[i];
			if (diff != 0)
				return diff;
			i++;
		}
	return (0);
}


/*int main()
{
	char	bloque1[] = "Hello";
	char	bloque1[] = "Hellp";

	size_t len = 5;

	int result = ft_memcmp(bloque1, bloque2, len);

	if (result < 0)
	{
		printf("1\n");
	} else if (result > 0)
	{
		printf("2\n");
	} else {
		printf("0\n");
	}
	return (0);
}*/
