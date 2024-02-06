#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = 0;
	if (src != NULL)
	{
		len = ft_strlen(src);
		if (dst != NULL && dstsize != 0)
		{
			i = 0;
			while ((i < len) && i < (dstsize - 1))
			{
				dst[i] = src[i];
				i++;
			}
			dst[i] = '\0';
		}
	}
	return (len);
}

/*COMENTARIOS*/
/* Obtenemos la longitud de la cadena de origen
Copiamos la cadena de origen al destino hasta alcanzar el tamaño especificado*/
/*Aseguramos que el destino esté terminado con un carácter nulo
Devolvemos la longitud original de la cadena de origen*/
