#include<stdio.h>
int ft_strlen(char *s){
    int i = 0 ;
    while(s[i]){
        i++;
    }
    return i ;
}
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size){
   int i = 0 ;
   while(src[i] && i <= size ){    
       dest[i] = src[i] ;
        i++;
   }
    return (ft_strlen(src));
}
