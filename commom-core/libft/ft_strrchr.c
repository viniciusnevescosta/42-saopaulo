#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char 	*src;
	unsigned char	letter;
	char			*last_occurrence;

	i = 0;
	src = (unsigned char *)s;
	letter = (unsigned char)c;
	last_occurrence = NULL;
	while (src[i])
	{
		if (src[i] == letter)
			last_occurrence = (char *)&src[i];
		i++;
	}
	if (letter == '\0')
		return ((char *)&src[i]);
	return (last_occurrence);
}
