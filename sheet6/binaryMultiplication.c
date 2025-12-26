#include <stdio.h>
unsigned short num;
unsigned char multiplier;
unsigned short result;

void receiveNumber(){
    printf("please enter a number in the range of 1-1000:");
    scanf("%hu", &num);
    if (!(num>= 0 && num <=1000)){
        printf("number is not within range.");
        exit(-1);
    }

}
void receiveMultiplier(){
    printf("please enter a number in the range of 1-15:");
    scanf("%hu", &multiplier);
    if (!(multiplier>= 1 && multiplier <=15)){
        printf("multiplier is not within range.");
        exit(-1);
    }
}
void performMultiplication(){
    for(unsigned char i = 0;i<=3;i++){
        if ((multiplier >> i) && 0x01){
            result += num<<i;
        }
    }
    printf("%hu", result);
}
int main()
{
    receiveNumber();
    receiveMultiplier();
    performMultiplication();
}
