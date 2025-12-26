#include <stdio.h>
int main(void) {
    int n = 10;
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 10; j >= i; j--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
