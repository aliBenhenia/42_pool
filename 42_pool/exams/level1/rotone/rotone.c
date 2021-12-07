#include<unistd.h>
void ft_putchar(char c){
  write(1,&c,1);
}
int main(int ac,char **av){
  int j = 0 ;
  if(ac > 1){
    while(av[1][j]){
      if(av[1][j] >= 'a' && av[1][j] <= 'z'){
        if(av[1][j] == 'z'){
          ft_putchar('a') ;
        }else{
          ft_putchar(av[1][j] + 1) ;
        }
      }
      if(av[1][j] >= 'A' && av[1][j] <= 'Z'){
        if(av[1][j] == 'Z'){
          ft_putchar('A') ;
        }else{
          ft_putchar(av[1][j] + 1) ;
        }
      }
      j++;
    }
  }
  ft_putchar('\n') ;
  return 0 ;
}
