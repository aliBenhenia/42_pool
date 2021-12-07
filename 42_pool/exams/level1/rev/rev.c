#include<unistd.h>
void ft_putchar(char c){
  write(1,&c,1);
}
int main(int ac,char **av){
  if(ac){
    int i = 0 ;
    while(av[1][i]){
      i++;
    }
    while(i >= 0){
      write(1,&av[1][i],1);
    //  ft_putchar(av[1][i]) ;
      i--;
    }
  }
  write(1,"\n",1);
  return 0 ;
}