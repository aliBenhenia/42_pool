int ft_is_prime(int nb){
    int c = 0  ;
    int i = 1 ;
    while(i <= nb){
        if(nb % i == 0){
            c++;
        }
        i++;
    }
    if(c == 2){
        return 1 ;
    }else{
        return 0 ;
    }
}
