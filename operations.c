#include"operations.h"
// contain all the function definitions


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

//! function to print the substring
void get_substring(char *str, int start, int end){
    if(start <= end){
        printf("%c", str[start]);
        get_substring(str, start+1, end);
    }
}
