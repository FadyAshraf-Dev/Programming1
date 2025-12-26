#include <stdio.h>
int main (){
    int x=0;
    scanf("%d", &x);
    char ispositive = (x & 0x80000000)?0:1;
    char isOdd  = (x & 0x00000001)?1:0;
    if (ispositive){
        printf("this number is positive\n");
    }
    else{
        printf("this number is negative\n");
    }
    if (isOdd){
        printf("this number is odd\n");
    }
    else{
        printf("this number is even\n");
    }

    return 0;
}
