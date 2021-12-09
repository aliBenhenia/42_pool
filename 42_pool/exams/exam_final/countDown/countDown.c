#include<unistd.h>
int main(void){
  int a = 57;
  while(a >= 48){
    write(1,&a,1);
    a--;
  }
  return 0 ;
}