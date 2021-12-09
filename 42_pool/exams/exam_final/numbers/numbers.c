#include<unistd.h>
int main(void){
  int a = 48 ;
  while(a <= 57){
    write(1,&a,1);
    a++;
  }
  return 0 ;
}