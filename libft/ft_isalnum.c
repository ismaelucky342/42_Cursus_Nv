

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*int main(void)
{
	int	result;

	result = ft_isalnum('a');
	printf("%d\n", result);
	return (0);
}*/
