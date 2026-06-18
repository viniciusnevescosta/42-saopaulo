#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*heap;
	size_t			s_len;

	if (!s || !f)
		return (NULL);

	s_len = ft_strlen(s);

	heap = (char *)malloc(sizeof(char) * (s_len + 1));
	if (!heap)
		return (NULL);

	i = 0;
	while (s[i])
	{
		heap[i] = f(i, s[i]);
		i++;
	}
	heap[i] = '\0';

	
	return (heap);
}
