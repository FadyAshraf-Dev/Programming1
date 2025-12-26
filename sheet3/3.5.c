#include <stdio.h>
int main(void) {
    int n = 10;
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
            }
        for (j = 0; j < n - i; j++) {
            printf("*");
        }
        for (j = 10; j >= i; j--) {
            printf("*");
        }

        printf("\n");
    }
    for (i = 1; i <= n; i++) {
        printf("\n");
    }
    return 0;
}
