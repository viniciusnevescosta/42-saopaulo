#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	size_t	str_start;
	size_t	str_end;

	if (!s1 || !set)
		return (NULL);
	s1_len = ft_strlen(s1);
	str_start = 0;
	str_end = s1_len;
	while (str_start < str_end && ft_strchr(set, s1[str_start]))
		str_start++;
	while (str_end > str_start && ft_strchr(set, s1[str_end - 1]))
		str_end--;
	return (ft_substr(s1, str_start, str_end - str_start));
}
