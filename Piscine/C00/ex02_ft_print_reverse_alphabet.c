#include <unistd.h>

void    ft_print_reverse_alphabet(void);

int main(void)
{
    ft_print_reverse_alphabet();
    return (0);
}

void    ft_print_reverse_alphabet(void)
{
    char    letter;

    letter = 'z';
    while (letter >= 'a')
    {
        write(1, &letter, 1);
        letter--;
    }
}
