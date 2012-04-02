/* Print CELSIUS - FAHRENHEIT table */

#include<stdio.h>
main()
{
        float fah, cel;
        int lower, upper, step;
        lower=0;
        upper=300;
        step=20;
        fah=lower;
        printf("************Celsius - Fahrenheit Table****************\n");
        printf("------------------------------------------------------\n");
        while(cel <= upper)
        {
                fah=(cel*9.0)/5.0 + 32.0;
                printf("%3.0f %6.1f\n", cel,fah);
                cel=cel+step;
        }
}
      
