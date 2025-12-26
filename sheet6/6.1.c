#include <stdio.h>
#include <string.h>
int main(){
    char s[10];
    int n=0;
    printf("please enter the desired string to modify:");
    gets(s);
    printf("please enter the position of the character desired to be removed:");
    scanf("%d", &n);
    strcpy(&s[n-1], &s[n]);
    printf("the modfied string is: ");
    puts(s);
    return 0;
}
