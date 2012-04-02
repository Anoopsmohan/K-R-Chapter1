/* Print FAHRENHEIT - CELSIUS table using Function*/


#include<stdio.h>
float celsius(float fah);
main()
{
        float fah, cel;
        int lower, upper, step;
        lower=0;
        upper=300;
        step=20;
        fah=lower;
        printf("************Fahrenheit - Celsius Table****************\n");
        printf("------------------------------------------------------\n");
        while(fah <= upper)
        {
		cel=celsius(fah);
                printf("%3.0f %6.1f\n", fah,cel);
                fah=fah+step;
        }
}


float celsius(float fah)
{
	float cel;
	cel=(5.0/9.0)*(fah-32.0);
	return cel;
}
