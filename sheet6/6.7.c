#include <stdio.h>
#include <string.h>
int main(){
    char string[30];
    char b[30];
    char verb[10] = " is";
    int n = 6;
    gets(string);
    strcpy(b,&string[n-1]);
    strcpy(&string[n-1], &verb[0]);
    strcpy(&string[n-1+strlen(verb)], &b[0]);
    puts(string);


    return 0;
}
