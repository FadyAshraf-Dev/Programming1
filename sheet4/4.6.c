#include <stdio.h>
#include <string.h>
int main(){
    char names[5][30];
    char *ptr[5];
    char *tmp;
    printf("please enter 5 names(29 character MAX):\n");
    for (int i =0;i<5;i++){
        gets(names[i]);// get the name
        ptr[i] = names[i];// assign the pointer array to the strings
    }
    for(int i =0;i<5;i++){
        for (int j=i+1; j<5;j++){
            if (strcmp(ptr[i], ptr[j])>0){
                tmp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = tmp;
            }
        }
    }
    printf("the sorted alphabetically names are:\n");
    for (int i =0;i<5;i++)
        puts(ptr[i]);

    return 0;
}
