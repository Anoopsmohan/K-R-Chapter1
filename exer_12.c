/* Write a program that prints its input one word per line */

#include<stdio.h>
main()
{
	int c,blank=0;
	while((c=getchar())!=EOF)
	{
                if(c!=' ')
		{
			putchar(c);
			blank=0;
		}

		else if(c==' ' || c=='\t' || c=='\n')
		{
			if(blank==0)
			{
				printf("\n");
				blank=1;
			}
		}	
	}
}

