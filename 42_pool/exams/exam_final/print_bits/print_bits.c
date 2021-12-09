#include<unistd.h>
void	print_bits(unsigned char octet){
  int i = 126 ;
  (octet / i) ? write(1,"0",1) : write(1,"1",1);
  (octet / i) ? octet -= i : 0 ;
  i /= 2 ;
}
