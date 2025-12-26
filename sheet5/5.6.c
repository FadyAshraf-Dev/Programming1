#include <stdio.h>
int main(){
    char c;
    int count=0;
    scanf("%c", &c);
    int mask = 1<<7;
    for(int i =0;i<8;i++){
        if(c & mask){
            count++;
        }
        mask>>=1;
    }
    char isCountEven = ~(count&1);
    printf("%d\n", count);
    if(isCountEven){
        count |= 1;
    }
    printf("%d\n", count);
    return 0;
}
