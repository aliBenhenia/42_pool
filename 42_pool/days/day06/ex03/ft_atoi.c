int ft_atoi(char *s){
    int r = 0 ;
    int sign = 1 ;
    while(*s == 32 ||(*s>=9&&*s<=13)) {
        s++;
    }
    if(*s == '-' || *s == '+'){
        if(*s == '-'){
            sign = -1 ;
        }
        s++;
    }
    while(*s >= 48 && *s <= 57){
        r = r * 10 + *s - '0';
        s++;
    }
    return sign * r ;
}
