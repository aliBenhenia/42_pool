int ft_iterative_factorial(int nb){
    int i = 1 ;
    while(nb >0 ){
        i = i * nb ;
        nb--;
    }
    return i ;
}
