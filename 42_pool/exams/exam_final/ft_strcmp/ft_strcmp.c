int    ft_strcmp(char *s1, char *s2){
  int diff = 0;
  int i = 0 ;
  while(s1[i] || s2[i]){
    diff = s1[i] - s2[i] ;
    if(diff != 0){
      break ;
    }
  }
  return diff  ;// leady too
}