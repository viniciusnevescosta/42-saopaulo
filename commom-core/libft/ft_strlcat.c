#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;
	size_t	original_dst_len;

	dst_len = 0;
	while (dst[dst_len])
		dst_len++;

	src_len = 0;
	while (src[src_len])
		src_len++;

	if (dst_len >= dstsize)
		return (dstsize + src_len);

	original_dst_len = dst_len;
	i = 0;
	while (src[i] && dst_len < dstsize - 1)
	{
		dst[dst_len] = src[i];
		dst_len++;
		i++;
	}

	dst[dst_len] = '\0';

	return (original_dst_len + src_len);
}
