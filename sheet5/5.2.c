#include <stdio.h>
int main(){
    char x,y,z;
    printf("enter two character please:\n");
    scanf("%c %c",&x,  &y);
    z = (x&0x0F) | (y&0xF0);
    printf("(ASCII) %d = %c", z, z);
    return 0;
}

