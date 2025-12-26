#include <stdio.h>
#include <string.h>
int main(){
    char string[30];
    int count = 0;

    gets(string);
    for(int i =0;i<30;i++){
        if (string[i] == 'e'){
            count+=1;
            printf("there is an 'e' at %d\n", i+1);
        }
    }
    printf("the number of 'e' in this string = %d\n", count);
    return 0;
}
