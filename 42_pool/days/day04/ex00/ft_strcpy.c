
char *ft_strcpy(char *dest, char *src){
    int len = 0 ;
    int i = 0 ;
    while(src[i] || dest[len]){
        dest[len] = src[i] ;
        i++;
        len++;
    }
    return dest ;
}
