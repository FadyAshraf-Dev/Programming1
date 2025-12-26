#include <stdio.h>
int main()
{
    printf("N\t10*N\t100*N\t1000*N\n");
    for(int i = 0; i <11; i++)
    {
        printf("%d\t%d\t%d\t%d\n",(int) i,(int) 10*i,(int) 100*i,(int) 1000*i);
    }

    return 0;
}
