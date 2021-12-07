void ft_strlen(char *s){
  int i = 0 ;
  while(s[i]){
    i++;
  }
  return i;
}
char    *ft_strrev(char *str){
  int len = ft_strlen(src) - 1;
  int i = 0 ;
  char temp ;
  while(i <= len/2){
    temp = str[i] ;
    str[i] = str[len - i] ;
    str[len - i] = temp ;
  }
  return str ;
}