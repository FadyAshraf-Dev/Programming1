#include <stdio.h>
#include <string.h>
int main(){
    char names[5][30] = {"ahmed", "assim", "fady", "ashraf", "omar"};
    char name[30];
    char isIn = 0;
    gets(name);
    for (int i =0;i <5;i++){
        if (strcmp(names[i], name)==0){
            isIn = 1;
        }
    }
    if(isIn){
        printf("the name typed is already a guest");
    }
    else{
        printf("the name typed is not a guest");
    }
    return 0;
}
