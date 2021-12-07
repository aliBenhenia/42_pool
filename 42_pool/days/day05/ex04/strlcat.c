int ft_strlen(char *s){
    int i = 0 ;
    while(s[i]){
        i++;
    }
    return i ;
}
unsigned int ft_strlcat(char *dest, char *src, unsigned int size){
    int i = 0 ;
    int lenD= ft_strlen(dest) ;
    int j = lenD ;
    int lenS = ft_strlen(src) ;
    int t = lenS + lenD ;
    while(src[i] && i + lenD <= size - 1){
        dest[j] = src[i] ;
        i++;
        j++;
    }
   return t ;
}
