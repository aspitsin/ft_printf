#include "libft.h"

int main(int argc, char **argv)
{
    if (0 && argv && argc) return 1;
    ft_printf("Here will be a text: %s\n","Hello");
    ft_printf("Here will be a number: %d\n", 123);
    ft_printf("Here will be the percent sign: %%\n");
    ft_printf("Here will be a char: %c\n", '$');
    ft_printf("Here will be a HEX: %X\n", 1024);
    ft_printf("Here will be a hex: %x\n", 10);

    char **chunks = ft_split("asddasdas%asdsdadsasd%%%%sdasdad%", '%'); 
    while(*chunks)
    {
        printf("%s\n", *chunks);
        chunks++;
    }

    return 0;
}