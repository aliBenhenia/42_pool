#include<unistd.h>
int main(int ac,char **av){
  if(ac == 4){
    int j = 0 ;
    while(av[1][j]){
      if(av[1][j] == av[2][0]){
        av[1][j] = av[3][0];
        write(1,&av[1][j],1);
      }else{
        write(1,&av[1][j],1);
      }
      j++;
    }
  }
  write(1,"\n",1);
  return 0;
}