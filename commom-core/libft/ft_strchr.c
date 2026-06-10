#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	letter;

	i = 0;
	str = (unsigned char *)str;
	letter = (unsigned char)c;
	while (str[i])
	{
		if (str[i] == letter)
			return ((char *)&str[i]);
		i++;
	}
	if (letter == '\0')
		return ((char *)&str[i]);

	return (NULL);
}