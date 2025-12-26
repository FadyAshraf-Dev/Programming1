#include <stdio.h>

int main(){
    unsigned int x;
    char hasBypassedMSB = 0;
    scanf("%u", &x);
    unsigned int displayMask = 1 << 31;
    printf("%10u = ", x);
    for(int i =1;i<=32;i++){
        if (x & displayMask){
            hasBypassedMSB = 1;
        }
        if (hasBypassedMSB){
            printf( x & displayMask? "1":"0");
            if (i % 4 == 0){
                printf(" ");
            }

        }
        displayMask  >>= 1;


    }
    return 0;

}
