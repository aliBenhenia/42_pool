int ft_strlen(char *s){
    int i = 0 ;
    while(s[i]){
        i++;
    }
    return i ;
}
char *ft_strncat(char *dest, char *src, unsigned int nb){
    int i = 0 ;
    int lens = ft_strlen(dest) ;
    while(i <= nb){
        dest[lens] = src[i] ;
        i++;
        lens++;
    }
    return dest ;
}
