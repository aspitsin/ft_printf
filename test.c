#include "libft.h"

int main(int argc, char **argv)
{
    if (0 && argv && argc) return 1;
   /* char **chunks = ft_split("Here will be a text: %sHere will be a text: %s", '%');
    printf("%s\n", *chunks);
    chunks++;
    printf("%s\n", *chunks);
    chunks++;
    printf("%s\n", *chunks);*/
    ft_printf("Here will be a text: %s\n","Hello");
    ft_printf("Here will be a number: %d\n", 123);
    ft_printf("Here will be the percent sign: %%\n");
    ft_printf("Here will be a char: %c\n", '$');
    ft_printf("Here will be a HEX: %X\n", 1024);
    ft_printf("Here will be a hex: %x\n", 10);
    return 0;
}