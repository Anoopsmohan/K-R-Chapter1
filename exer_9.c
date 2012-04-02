/* Program to copy its input to its output, replacing each string of one or more blanks by a single blank. */ 

#include<stdio.h>
main()
{
	int c;
        int blank=0;
	while((c=getchar()) != EOF)
	{
		if (c != ' ' )
		{
			putchar(c);
			blank=0;
		}
		else
		{
			if(blank == 0)
			{
				putchar(c);
				blank=1;
			}
     		}
	}
}
