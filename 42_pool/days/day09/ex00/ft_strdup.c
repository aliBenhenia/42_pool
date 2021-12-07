#include<stdlib.h>
int ft_strlen(char *s){
  int i = 0 ;
  while(s[i]){
    i++;
  }
  return i ;
}
char *ft_strdup(char *src){
  int i = 0;
  char *p ;
  int len = ft_strlen(src);
  p = (char *)malloc(sizeof(char)*len);
  while(src[i]){
    p[i] = src[i] ;
    i++;
  }
  p[i] = src[i] ;
  return p ;
}
