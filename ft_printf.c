#include "libft.h"

char *reset_buff(char *old_buff, char *chunk, char *param)
{
    char *tmp_buff = old_buff;
    char *tmp_chunk = chunk;
    char *tmp_param = param;
    int count = 0;

    while(*tmp_buff)
    {
        tmp_buff++;
        count++;
    }
     while(*tmp_chunk)
    {
        tmp_chunk++;
        count++;
    }
     while(*tmp_param)
    {
        tmp_param++;
        count++;
    }
    char *tmp_result = (char *)malloc(count + 1);
    char *result = tmp_result;
    while (*old_buff)
    {
        *tmp_result = *old_buff;
        tmp_result++;
        old_buff++;
    }
    while (*chunk)
    {
        *tmp_result = *chunk;
        tmp_result++;
        chunk++;
    }
    while (*param)
    {
        *tmp_result = *param;
        tmp_result++;
        param++;
    }
    *tmp_result = 0;
    return result;
}

char *scan_next(char *format)
{
    int c = 0;
    char *tmp_f = (char*)format;

    while(*tmp_f && *tmp_f != '%')
    { 
        c++; 
        tmp_f++;
    }
    char *buff = (char *)malloc(c + 1);
    char *tmp_b = buff;
    tmp_f = (char*)format;
    while(c)
    {
        *tmp_b = *tmp_f;
        tmp_b++;
        tmp_f++;
        c--; 
    }
    *tmp_b = 0;
    return buff;
}

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
    char *tmp_format = (char*)format;
    char *buff = "";
    while(*tmp_format)
    {
        char *chunk = scan_next(tmp_format); 
        char *tmp_chunk = chunk;
        while(*tmp_chunk)
        {
            tmp_chunk++;
            tmp_format++;
        }
        if(!tmp_format)
        {
            buff = reset_buff(buff, chunk, NULL);
            break;
        } //TODO: vivesti na ekran tak kak nashki konec stroki 
        tmp_format++;
        if(!tmp_format)
        {
            buff = reset_buff(buff, chunk, NULL);
            break;
        } //TODO: esli net nichego za procentom
        char marker = *tmp_format;
        char *param = get_next_param(marker, ap);
        //printf("chunk = %s, param = %s\n", chunk, param);
        buff = reset_buff(buff, chunk, param);
        tmp_format++;
    }
    while(*buff)
    {
        write(0, buff, 1);
        buff++;
    }
    va_end(ap);
    return 0;
}