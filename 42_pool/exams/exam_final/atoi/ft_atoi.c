int	ft_atoi(const char *s){
  int sign = 1 ;
  long r ;
  while(*s == 32 || (*s >= 9 && *s <= 13)){
    s++;
  }
  if(*s == '-' || *s == '+'){
    if(*s == '-'){
      sign = -1 ;
    }
    s++;
  }
  while(*s >= 48 && *s <= 57){
    r = r * 10 + *s - '0' ;
    s++;
  }
  return (sign * (int)r) ;
}