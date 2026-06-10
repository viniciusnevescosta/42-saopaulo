#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	void			*s;
	unsigned char	*ptr;

	if (count != 0 && size > ((size_t)-1) / count)
		return (NULL);

	s = malloc(count * size);
	if (!s)
		return (NULL);

	ptr = (unsigned char *)s;
	i = 0;
	while (i < count * size)
	{
		ptr[i] = 0;
		i++;
	}

	return (s);
}
