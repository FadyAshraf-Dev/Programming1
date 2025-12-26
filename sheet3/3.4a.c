#include <stdio.h>
int main(void) {
    int n = 5;
    int i, j;
    for (i = 1; i <= n; i++) {
        printf("\t\t");
        for (j = 1; j <= i; j++) {
            if (i==3 || j==3){
                printf("# ");
            }
            else{
                printf("* ");
            }

        }
        printf("\n");
        }
    return 0;
}
