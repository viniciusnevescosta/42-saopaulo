#include "libft.h"

size_t	calc_str_size(size_t len, size_t total_len, unsigned int start);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	string_len;
	size_t	real_len;
	char	*heap;

	if (!s)
		return (NULL);

	string_len = ft_strlen(s);
	if (start >= string_len)
	{
		heap = malloc(1);
		if (!heap)
			return (NULL);
		heap[0] = '\0';
		return (heap);
	}

	real_len = calc_str_size(len, string_len, start);
	heap = malloc((real_len + 1) * sizeof(char));
	if (!heap)
		return (NULL);

	ft_strlcpy(heap, s + start, real_len + 1);

	return (heap);
}

size_t	calc_str_size(size_t len, size_t total_len, unsigned int start)
{
	if (len > total_len - start)
		return (total_len - start);

	return (len);
}
