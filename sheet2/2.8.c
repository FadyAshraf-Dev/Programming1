/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float gallons=0, miles=0, sum=0;
    printf("\nEnter Hours Worked (enter -1 to end): ");
    scanf("%f", &gallons);
    while( gallons !=-1)
    {
        printf("\nEnter Hourly Rate of The Worker: ");
        scanf("%f", &miles);
        if (gallons <= 40 && gallons>0)
        {
            sum = miles*gallons;
            printf("%.2f", sum);
        }
        else
        {
            sum = 40*miles + (gallons-40)*1.5*miles;
            printf("%.2f", sum);
        }
        printf("\nEnter Hours Worked (enter -1 to end): ");
        scanf("%f", &gallons);
    }
	return 0;
}