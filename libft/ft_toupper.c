#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	else
	{
		return (c);
	}
}

/*int main() {
   char ch = 'g';
   printf("%c",ft_toupper(ch));
   return (0);
}*/
