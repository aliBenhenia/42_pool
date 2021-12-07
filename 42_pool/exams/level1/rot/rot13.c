#include<unistd.h>
void ft_putchar(char c){
  write(1,&c,1);
}
int main(int ac,char **av){
  int j = 0 ;
  if(ac == 2){
    while(av[1][j]){
      if(av[1][j] >= 'A' && av[1][j] <= 'Z'){
        if(av[1][j] >= 'M' && av[1][j] <= 'Z'){
          ft_putchar(av[1][j] - 13);
        }else{
          ft_putchar(av[1][j] + 13);
        }
      }
      else if(av[1][j] >= 'a' && av[1][j] <= 'z'){
        if(av[1][j] >= 'm' && av[1][j] <= 'z'){
          ft_putchar(av[1][j] - 13);
        }else{
          ft_putchar(av[1][j] + 13);
        }
      }
      else{
          ft_putchar(av[1][j]);
      }
      j++;
    }
  }
  ft_putchar('\n') ;
  return 0 ;
}