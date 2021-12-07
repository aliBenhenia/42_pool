#include<stdlib.hh>
int *ft_range(int min, int max){
  int *p ;
  int minn = min ;
  p = (int *)malloc(sizeof(int)*(max-min));
  while(min <= max){
    p[min -minn] = min ;
    min++;
  }
  return p ;
}
