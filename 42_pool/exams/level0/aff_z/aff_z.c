#include<unistd.h>
int main(int ac ,char **av){
	write(1,"z",1);
	write(1,"\n",1);
	return 0 ;
}
