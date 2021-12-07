#include<unistd.h>
int main(int ac,char **av){
	int j = 0 ;
	if(ac < 2){
		write(1,"a",1);
	}else{
		while(av[1][j]){
			if(av[1][j] == 'a'){
				write(1,"a",1);
				break;
			}
			j++;
		}
	}
	write(1,"\n",1);
}
