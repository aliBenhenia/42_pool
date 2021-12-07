#include<unistd.h>
void ft_putchar(char c){
    write(1,&c,1);
}
void ft_putnbr(int n){
    if(n < 0){
        ft_putchar('-');
        n = n * -1 ;
    }
    if(n/10 == 0){
        ft_putchar(n+48);
    }else{
        ft_putnbr(n/10) ;
        ft_putchar((n%10)+48);
    }
}
main(){
   ft_putnbr(5560);  
}
