//#include <stdio.h>
//int main (){ // testing and playing and experimenting
//    int x=2290649224;
//    int y=2290649224;
//    int fourthBitX, fourthBitY;
//
//    for(int i =0;i<8;i++){
//        fourthBitX = (x & (0x80000000 >> (4*i) ) );
//        fourthBitY = (y & (0x80000000 >> (4*i) ) );
//        if (fourthBitX == fourthBitY){
//            printf("%4c", fourthBitX? '1':'0');
//        }
//    }
//
//
//
//    return 0;
//}
#include <stdio.h>
int main (){
    int x, y;
    scanf("%x %x", &x, &y);
    int fourthBitX, fourthBitY;

    for(int i =7;i<8;i++){ // only first fourth bit
        fourthBitX = (x & (0x80000000 >> (4*i) ) );
        fourthBitY = (y & (0x80000000 >> (4*i) ) );
        if (fourthBitX == fourthBitY){
            printf("%4c", fourthBitX? '1':'0');
        }
    }



    return 0;
}
