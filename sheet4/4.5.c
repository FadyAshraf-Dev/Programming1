#include <stdio.h>
double average(int* ptr, int size){
    int sum=0;
    for (int i =0;i<size;i++){
        sum+=*(ptr+i);
    }
    double avg = (double) sum/size;
    return avg;
}
int main(){
    int arr[10];
    double avg=0;
    for (int i =0;i<10;i++){
        printf("please enter element no.%d:", i+1);
        scanf("%d", &arr[i]);
    }
    avg = average(arr, sizeof(arr)/sizeof(arr[0]));
    printf("the average using pointer arithmetic is: %.2lf", avg);
    return 0;
}
