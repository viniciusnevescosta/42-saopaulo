#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*src;
	unsigned char	letter;

	i = 0;
	src = (unsigned char *)s;
	letter = (unsigned char)c;
	while (i < n)
	{
		if (src[i] == letter)
			return ((void *)&src[i]);
		i++;
	}

	return (NULL);
}
