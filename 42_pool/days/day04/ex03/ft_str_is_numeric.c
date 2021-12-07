int ft_str_is_numeric(char *s){
    int i = 0 ;
    int y ;
    while(s[i]){
        if(s[i] >= 48 && s[i] <= 57){
            y = 1 ;
        }else{
            y = 0 ;
            break ;
        }
        i++;
    }
    return y ;
}
