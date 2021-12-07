int ft_sqrt(int nb){
    int i = 1 ;
    while(i <= nb){
        if((float)nb/i == i){
            return i ;
        }
        i++;
    }
    return 0; 
}
