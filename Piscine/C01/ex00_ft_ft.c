#include <stdio.h>

void    ft_ft(int *nbr);

int main(void)
{
    int nbr;
    int *nbr_ptr;

    nbr = 10;
    nbr_ptr = &nbr;
    
    ft_ft(nbr_ptr);

    printf("%i", nbr);
    return (0);
}

void    ft_ft(int *nbr)
{
    *nbr = 42;
}