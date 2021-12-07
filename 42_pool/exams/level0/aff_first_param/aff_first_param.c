#include<unistd.h>
int main(int ac,char **av){
	int j = 0 ;
	if(ac > 1){
		while(av[1][j]){
			write(1,&av[1][j],1);
			j++ ;
		}
	}
	write(1,"\n",1);
	return 0 ;
}

