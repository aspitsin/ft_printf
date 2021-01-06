#include "libft.h"

char *get_next_param(char marker, va_list ap)
{
    char *tmp_char;

    switch(marker)
    {
        char *hex;
        char *tmp_hex;
        case '%':
            return "\%";
        case 's': 
            return va_arg (ap, char *);
        case 'd':
        case 'i':
        case 'u':
            return ft_itoa(va_arg (ap, int));
        case 'c':
            tmp_char = (char *)malloc(2);
            *tmp_char = va_arg(ap, int);
            tmp_char++;
            *tmp_char = '\0';
            tmp_char--;
            return tmp_char;
        case 'X':
            return ft_itoa_hex(va_arg(ap,int), 16, ' ');
        case 'x':
            hex = ft_itoa_hex(va_arg(ap,int), 16, ' ');
            tmp_hex = hex;
            while(*tmp_hex)
            {
                *tmp_hex = ft_tolower(*tmp_hex);
                tmp_hex++;
            } 
            return hex;
        default:
            return "";
    }
}

int ft_printf(const char *format, ...)
{
    va_list ap;
	va_start(ap, format);

    char **chunks = ft_split(format, '%');
    char *buff;
    char marker;
    char *current_chunk;

    if(*format == '%')
    {
        current_chunk = *chunks; //propuskaem procent v nachale
        marker = *current_chunk; //smotrim chto za ney
        current_chunk++;
        buff = ft_strjoin(get_next_param(marker, ap), current_chunk);
        chunks++;
    }
    else 
    {    
        buff = *chunks;
        chunks++;
    }
    while(*chunks){
        current_chunk = *chunks;
        marker = *current_chunk;
        current_chunk++;
        buff = ft_strjoin(buff, get_next_param(marker, ap));
        buff = ft_strjoin(buff, current_chunk);
        chunks++;
    }
    while(*buff)
    {
        write(0, buff, 1);
        buff++;
    }
    va_end(ap);
    return 0;
}