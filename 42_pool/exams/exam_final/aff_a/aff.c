#include<unistd.h>
int main(int ac,char **av){
  if(ac > 1){
    int j = 0 ;
    while(av[1][j]){
      if(av[1][j] == 'a'){
        write(1,"a",1);
        break ;
      }
      j++;
    }
  }
  write(1,"\n",1);
  return 0 ;
}