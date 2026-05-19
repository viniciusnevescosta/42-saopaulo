#include <unistd.h>

void    ft_putchar(char c);

int main(int argc, char **argv)
{
    if (argc != 2)
        return (0);

    int i;

    i = 0;

    while (argv[1][i] != '\0')
    {
        ft_putchar(argv[1][i]);
        i++;
    }

    return (0);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
