#include <stdio.h>
#include <string.h>
int main(){
    char string1[60], string2[60];
    char string[120];
    gets(string1);gets(string2);
    strcpy(&string[0], &string1[0]);
    strcpy(&string[strlen(string1)], &string2[0]);
    puts(string1);
    puts(string2);
    puts(string);

    return 0;
}
