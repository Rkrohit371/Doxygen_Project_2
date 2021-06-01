//! function to print the substring
void get_substring(char *str, int start, int end){
    if(start <= end){
        printf("%c", str[start]);
        get_substring(str, start+1, end);
    }
}
