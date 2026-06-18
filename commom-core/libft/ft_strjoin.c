#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*heap;
	size_t	s1_len;
	size_t	s2_len;
	size_t 	i;

	if (!s1 || !s2)
		return (NULL);

	s1_len = 0;
	while (s1[s1_len])
		s1_len++;

	s2_len = 0;
	while (s2[s2_len])
		s2_len++;

	heap = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!heap)
		return (NULL);

	i = 0;
	while(s1[i])
	{
		heap[i] = s1[i];
		i++;
	}

	i = 0;
	while(s2[i])
	{
		heap[s1_len] = s2[i];
		s1_len++;
		i++;
	}
	
	heap[s1_len] = '\0';
	return (heap);
}
