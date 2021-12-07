int ft_strcmp(char *s1, char *s2){
    int dif ;
    int i = 0 ;
    dif = 0;
    while(s1[i] || s2[i]){
        dif = s1[i] - s2[i] ;
        if(dif != 0){
            break ;
        }
        i++;
    }
    return dif ;
}
