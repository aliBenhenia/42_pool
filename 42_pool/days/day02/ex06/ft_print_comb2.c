#include<unistd.h>
void ft_putchar(char c){
    write(1,&c,1);
}
void ft_print_comb2(void){
    int n1 = 0 ;
    int n2 = n1 + 1 ;
    while(n1 < 99){
        ft_putchar((n1/10)+48);
        ft_putchar((n1%10)+48);
        ft_putchar(' ');
        ft_putchar((n2/10)+48);
        ft_putchar((n2%10)+48);
      //  ft_putchar(' ');
       // ft_putchar(',');
        n2++;
        if (n1 < 98)
		{
   			ft_putchar(',');
	   		ft_putchar(' ');
		}
        if(n2 >= 100){
            n1++;
            n2 = n1 + 1;
        }
    }
}


main(){
   ft_print_comb2();  
}
