#include<unistd.h>
void ft_putchar(char c){
  write(1,&c,1);
}
int main(int ac,char **av){
  if(ac > 1){
    int j = 0 ;
    int x , y ;
    while(av[1][j]){
      if(av[1][j] >= 'A' && av[1][j] <= 'Z'){
        x = 90 - av[1][j] ; 
        y = 65 + x ;
        ft_putchar(y) ;
      }
     else if(av[1][j] >= 'a' && av[1][j] <= 'z'){
        x = 122 - av[1][j] ; 
        y = 97 + x ;
        ft_putchar(y) ;
      }else{
        ft_putchar(av[1][j]) ;
      }
      j++;
    }
  }
  return 0 ;
}