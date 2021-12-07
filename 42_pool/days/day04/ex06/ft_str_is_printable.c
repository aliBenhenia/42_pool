int ft_str_is_printable(char *s){
    int i = 0 ;
    int y ;
    while(s[i]){
        if(s[i] >= 32 && s[i] <= 126){
            y = 1 ;
        }else{
            y  = 0 ;
            break ; 
        }
        i++;
    }
    return y ;
}
