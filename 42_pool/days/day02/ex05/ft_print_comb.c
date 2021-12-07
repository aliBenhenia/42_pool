#include<unistd.h>
void ft_print_comb(void){
    int i = 48 ;
    int j, k ;
    while(i <= 57){
        j = i + 1 ;
        while(j <= 57){
            k = j + 1 ;
            while(k <= 57){
                write(1,&i,1);
                write(1,&j,1);
                write(1,&k,1);
                write(1," ",1);
                write(1,",",1);
                k++;
            }
            j++;
        }
        i++;
    }
}
main(){
    ft_print_comb();  
}
