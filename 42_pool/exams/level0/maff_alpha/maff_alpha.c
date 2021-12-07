#include<unistd.h>
void ft_putchar(char c){
  write(1,&c,1);
}
int main(int ac,char **av){
  char a = 'a' ;
  char b = 'B';
  while(a <= 'z' && b <= 'Z'){
    ft_putchar(a);
    ft_putchar(b);
    a += 2 ;
    b += 2 ;
  }
  write(1,"\n",1);
}
