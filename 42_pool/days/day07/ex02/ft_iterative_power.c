int ft_iterative_power(int nb, int power){
    int i = 1 ;
    while(power > 0){
        i = i * nb;
        power--;
    }
    return i ;
}
