#include <stdio.h>
int main(){
    char hasPassedMSB;
    int x,y;
    scanf("%d", &x);
    for(int i =28;i>=0;i=i-4){
        y=x>>i;
        y=y&0x000F;
        if(y){
            hasPassedMSB=1;
        }
        if (hasPassedMSB){
            printf("%4d",y);
        }
    }
    return 0;
}
//#include <stdio.h>
//int main()
//{
//    int x,y,i;
//    char hasPassedMSB;
//    printf("enter the integer number:");
//    scanf("%x",&x);
//    for(i=28;i>=0;i=i-4)
//    {
//        y=x>>i;
//        y=y&0x000F;
//        if(y){
//            hasPassedMSB=1;
//        }
//        if (hasPassedMSB){
//            printf("%4d",y);
//        }
//    }
//    return 0;
//}
