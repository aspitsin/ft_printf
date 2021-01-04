//*************************************************************
// void prntnum(unsigned long n, int base, char sign, char *outbuf)
// unsigned long num = number to be printed
// int base        = number base for conversion;  decimal=10,hex=16
// char sign       = signed or unsigned output
// char *outbuf   = buffer to hold the output number
//*************************************************************

#include "libft.h"

char *ft_itoa_hex(unsigned long num, int base, char sign)
{
    char *outbuf = (char*)malloc(20);
    int i = 12;
    int j = 0;

    do{
        outbuf[i] = "0123456789ABCDEF"[num % base];
        i--;
        num = num/base;
    }while( num > 0);

    if(sign != ' '){
        outbuf[j] = sign;
        ++j;
    }
    
    outbuf[j] = '0';
    j++;
    outbuf[j] = 'x';
    j++;

    while( ++i < 13){
       outbuf[j++] = outbuf[i];
    }

    outbuf[j] = 0;
    return outbuf;
}