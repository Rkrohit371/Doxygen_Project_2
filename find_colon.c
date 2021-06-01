//! function to find the index of colon character
int find_semicolon(char *str){
    int len = strlen(str);
    //! printf("\ncolon: %d", len);
    int i=0;
    int result = i;
    while(i < len)
    {
        if(str[i] == ';'){
            result = i;
        }
        i++;
    }
    //! printf("\ncolon: %d", result);
    return result;
}