#include<unistd.h>
int main(int ac ,char **av){
  int i = 0 ;
  int x , y , j  ; 
  if(ac > 1){
    while(av[1][i]){
      if(av[1][i] >= 'a' && av[1][i] <= 'z'){
        x = 122 - av[1][i] ;
        y = 25 - x ;
        j = 0 ;
        while(j <= y){
          write(1,&av[1][i],1);
          j++;
        }
      }
     else if(av[1][i] >= 'A' && av[1][i] <= 'Z'){
        x = 90 - av[1][i];
        y = 25 - x ;
        j = 0 ;
        while(j <= y){
          write(1,&av[1][i],1);
          j++;
        }
      }
      else{
          write(1,&av[1][i],1);
      }
      i++;
    }
  }
  return 0 ;
}