#include "libft.h"

int main(void)
{
	const char *str1 = "Hello WorldHello";
	const char *str2 = "Hello";

	char *result = ft_strtrim(str1, str2);

	 printf("%s", result);
	return (0);
	
}

