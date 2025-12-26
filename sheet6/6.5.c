#include <stdio.h>
#include <string.h>
int main(){
    char string[30];
    int count = 1;

    gets(string);
    for(int i =0;i<strlen(string);i++){
        if (string[i] == ' '){
            count+=1;
            printf("there is an 'e' at %d\n", i+1);
        }
    }
    printf("the number of words in this string = %d\n", count);
    return 0;
}
