#include <stdio.h>
int main (){
    int num = 0;
    scanf("%d", &num);
    unsigned int mask = 1<<31;
//    if ((mask & num?  1: 0) == 0){
    printf("%10d = ", num);
    for(int i =1;i<=32;i++){
        putchar(num & mask? '1': '0');
        mask >>=1;
        if (i%8==0){
            putchar(' ');
        }
    }
//    }
//    else{ // extra functionality
//        num = (~num) + 1;
//        printf("%10d = ", num);
//        for(int i =1;i<=32;i++){
//            putchar(num & mask? '1': '0');
//            mask >>=1;
//            if (i%8==0){
//                putchar(' ');
//            }
//        }
//    }

    return 0;
}
