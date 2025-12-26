#include <stdio.h>
void min(double arr[],unsigned int size){
    double smallest = arr[0];
    for (int i =1;i<size;i++){
        if (arr[i] < smallest){
            smallest = arr[i];
        }
    }
    printf("the smallest number in the array is is: %.1lf\n", smallest);
}
void max(double arr[], unsigned int size){
    double largest = arr[0];
    for (int i =1;i<size;i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    printf("the largest number in the array is is: %.1lf\n", largest);
}
void avg(double arr[], unsigned int size){
    double sum=0.0;
    for(int i =0;i<size;i++){
        sum+=arr[i];
    }
    printf("the sum of the array's numbers is: %.1lf, and their average is: %.1lf\n", sum, sum/size);
}
int main(){
    printf("enter the number of elements of the array:");
    unsigned short n;
    scanf("%hu", &n);
    if (n == 0){
        printf("number lower than 1");
        exit(-1);
    }
    double arr[n];
    for (int i =0;i<n;i++){
        printf("enter the number of index %d:" , i);
        scanf("%lf", &arr[i]);
        printf("\n");

    }
    min(arr, n);
    max(arr, n);
    avg(arr, n);
    return 0;
}
