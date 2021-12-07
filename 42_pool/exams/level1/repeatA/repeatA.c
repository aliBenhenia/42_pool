#include<unistd.h>
int main(int ac,char **av){
  int j = 0 ;
  int y , x , i ;
  if(ac > 1){
    while(av[1][j]){
      if(av[1][j] >= 'A' && av[1][j] <= 'Z'){
        y = 91 - av[1][j] ;
        x = 26 - y ;
        i = 0; 
        while(i <= x){
          write(1,&av[1][j],1);
          i++;
        }
      }
      else if(av[1][j] >= 'a' && av[1][j] <= 'z'){
        y = 123 - av[1][j] ;
        x = 26 - y ;
        i = 0; 
        while(i <= x){
          write(1,&av[1][j],1);
          i++;
        }
      }else{
          write(1,&av[1][j],1);
      }
      j++;
    }
  }
  write(1,"\n",1);
  return 0 ;
}