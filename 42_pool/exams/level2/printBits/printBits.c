#include<unistd.h>
void	print_bits(unsigned char octet){
  int i = 126 ;
  while(octet > 0 && i){
    (octet / i) ? write(1,"1",1) : write(1,"0",1);
    (octet / i) ? octet -= 1 : 0 ;
    i = i / 2 ;
  }
}