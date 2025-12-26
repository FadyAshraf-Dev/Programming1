#include <stdio.h>
int main(){
    int matrix[4][4];
    int result = 0;
    double avg = 0.0;
    for(int i = 0;i<4;i++){
        for(int j = 0;j<4;j++){
            printf("please, enter the element in matrix[%d][%d]:", i , j);
            scanf("%d", &matrix[i][j]);

        }

    }
    for(int i = 0;i<4;i++){
        for(int j = 0;j<4;j++){
            printf("%d ",matrix[i][j]);

        }
        printf("\n");
    }
    for(int i = 0;i<4;i++){
        result +=matrix[i][i];
    }


    avg = (double) result/4.0;
    printf("the summation of the diagonal = %d, and the average = %.2lf", result, avg);
    return 0;
}
