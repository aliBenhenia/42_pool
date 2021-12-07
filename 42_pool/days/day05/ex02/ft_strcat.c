int ft_strlen(char *s){
    int i = 0 ;
    while(s[i]){
        i++;
    }
    return i ;
}
char *ft_strcat(char *dest, char *src){
    int i = 0 ;
    int len = ft_strlen(dest) - 1 ;
    while(dest[len] || src[i]){
        dest[len] = src[i] ;
        i++;
        len++;
    }
    return dest ;
}
