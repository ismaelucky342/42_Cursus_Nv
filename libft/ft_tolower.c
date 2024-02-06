
#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	else
	{
		return (c);
	}
}

/*int main() {
   char ch = 'g';
   printf("%c",ft_tolower(ch));
   return (0);
}*/
