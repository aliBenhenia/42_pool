char *ft_strupcase(char *s){
    int i = 0 ;
    while(s[i]){
        if(s[i]>= 'a' && s[i] <= 'z'){
            s[i] = s[i] - 32 ; 
        }
        i++;
    }
    return s ;
}
