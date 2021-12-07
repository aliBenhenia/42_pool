#include<unistd.h>
void ft_print_reverse_alphabet(void){
        char i = 'z' ;
        while(i >= 'a'){
                write(1,&i,1);
                i--;
        }
}
main(){
    ft_print_reverse_alphabet();
    
}
