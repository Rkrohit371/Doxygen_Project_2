#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include"operations.h"

/*
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
*/

int main(void)
{
    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;

    fp = fopen("text.txt", "r");
    if (fp == NULL)
        exit(EXIT_FAILURE);

    while ((read = getline(&line, &len, fp)) != -1) {
        // printf("Retrieved line of length %zu:\n", read);
        // printf("%s", line);
        int dollar_index = find_dollar(line); //! find index of dollar char
        int semicolon_index = find_semicolon(line); //! find index of colon char
        //! printf("\n%d\n%d", dollar_index, semicolon_index);
        get_substring(line, dollar_index, semicolon_index);
        printf("\n");
    }

    fclose(fp);
    if (line)
        free(line);
    exit(EXIT_SUCCESS);
}
