int ft_fibonacci(int index){
    int count = 0;
    int a = 0;
    int b = 1;
    int c ;
    while(count < index){
        c = a + b ;
        a = b ;
        b = c ;
        count++;
    }
    return c ;
}
