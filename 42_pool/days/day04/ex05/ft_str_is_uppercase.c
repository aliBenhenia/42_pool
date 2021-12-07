int ft_str_is_uppercase(char *s){
    int i = 0 ;
    int y ;
    while(s[i]){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            y = 1 ;
        }else{
            y  = 0 ;
            break ; 
        }
        i++;
    }
    return y ;
}
