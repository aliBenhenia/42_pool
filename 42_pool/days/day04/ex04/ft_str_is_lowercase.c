int ft_str_is_lowercase(char *s){
    int i = 0 ;
    int y ;
    while(s[i]){
        if(s[i] >= 'a' && s[i] <= 'z'){
            y = 1;
        }else{
            y = 0 ;
            break ;
        }
        i++;
    }
    return y ;
}
