#include <stdio.h>

int ft_strlen(char *str);

int main(int argc, char **argv)
{
    if (argc  != 2)
        return (0);

    printf("%i", ft_strlen(argv[1]));
    return (0);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;

    return (i);
}
