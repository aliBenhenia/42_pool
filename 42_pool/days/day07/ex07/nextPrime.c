int is_prime(int nb){
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
int next(int n){
    if(is_prime(n)){
        return n ;
    }else{
        return(next(n + 1)) ;
    }
}
