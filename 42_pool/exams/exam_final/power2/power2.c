#include<stdio.h>
int		is_power_of_2(unsigned int n){
  if(n == 0){
    return 0 ;
  }
  while(n % 2 == 0){
    n /= 2 ;
  }
  return (n / 2 == 1) ? 1 : 0 ;
}
// test 
int main(){
  printf("%d",is_power_of_2(6));
}
// comment
/*
Hello katie , how are you ? i found your name while i was following disney by chance and wanted to talk to you because i like this culture and life very much there , and we may be friends and i wait your response with all respect


/*