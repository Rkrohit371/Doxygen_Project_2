//! funtion to find the index of dollar character
int find_dollar(char *str){
    int len = strlen(str);
    //! printf("\ndollar: %d", len);
    int i=0;
    int result = i;
    while(i < len)
    {
        if(str[i] == '$'){
            result = i;
        }
        i++;
    }
    //! printf("\ndollar: %d", result);
    return result;
}