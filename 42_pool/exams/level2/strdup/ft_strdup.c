#include<stdlib.h>
int ft_strlen(char *s){
  int i = 0 ;
  while(s[i]){
    i++;
  }
  return i ;
}
char    *ft_strdup(char *src){
  int i = 0;
  char *p ;
  p = (char *)malloc(sizeof(*p)*ft_strlen(src));
  while(src[i]){
    p[i] = src[i] ;
    i++;
  }
    p[i] = src[i] ;
    return p ; 
}