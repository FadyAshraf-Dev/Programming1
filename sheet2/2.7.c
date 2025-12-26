/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float gallons=0, miles=0, sum=0;
    printf("\nEnter Gallons Utilized (Enter -1 to End): ");
    scanf("%f", &gallons);
    unsigned int i = 0;
    while( gallons !=-1)
    {
        printf("\nEnter Miles Travelled: ");
        scanf("%f", &miles);
        printf("\n%.2f\n", miles*gallons);
        sum += miles*gallons;
        printf("\nEnter Gallons Utilized (Enter -1 to End): ");
        scanf("%f", &gallons);
        i++;
    }
    if (i==0)
    {
        printf("\nNo data was entered");
    }
    else
    {
        printf("\navg = %.2f", sum/i);
    }
	return 0;
}