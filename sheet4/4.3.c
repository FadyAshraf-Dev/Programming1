#include <stdio.h>
int main(){

    int matrix[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    int transpose[5][5];
    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            transpose[j][i] =matrix[i][j];
        }

    }


    printf("The original matrix is:\n");
    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            printf("%4d ",matrix[i][j]);

        }
        printf("\n");
    }
    printf("The transpose matrix is:\n");
    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            printf("%4d ",transpose[i][j]);

        }
        printf("\n");
    }




    return 0;
}
