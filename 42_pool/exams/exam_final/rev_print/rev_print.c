#include<unistd.h>
int ft_strlen(char *s){
  int i = 0 ;
  while(s[i]){
    i++;
  }
  return i ;
}
int main(int ac,char **av){
  int i = 0 ;
  if(ac > 1){
    char temp ;
    int len = ft_strlen(av[1]) - 1;
    while(i <= len / 2){
      temp = av[1][i] ;
      av[1][i] = av[1][len - i] ;
      av[1][len - i] = temp ;
     // write(1,&av[1][i],1);
      i++;
    }
    i = 0 ;
    while(av[1][i]){
      write(1,&av[1][i],1);
      i++;
    }
  }
  return 0 ;
}