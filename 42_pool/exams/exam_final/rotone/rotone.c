#include<unistd.h>
void ft_putchar(char c){
  write(1,&c,1);
}
int main(int ac,char **av){
  int i = 0 ;
  if(ac > 1){
    while(av[1][i]){
      if(av[1][i] == 'z' || av[1][i] == 'Z'){
        if(av[1][i] == 'z'){
          write(1,"a",1);
        }
        if(av[1][i] == 'Z'){
          write(1,"A",1);
        }
      }else{
         ft_putchar(av[1][i] + 1) ;
      }
      i++;
    }
  }
  return 0 ;
}