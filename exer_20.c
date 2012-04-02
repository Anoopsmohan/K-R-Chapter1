/* Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop. */

#include<stdio.h>
#define TAB 10
main()
{
	int nb=0,pos=1,c;
	while((c=getchar())!=EOF)
	{
		if(c == '\t')
		{
			nb=TAB - (pos -1)%TAB;
			while(nb>0)
			{
				putchar(' ');
				++pos;
				--nb;
			}
		}
		else if(c == '\n')
		{
			putchar(c);
			pos=1;
		}
		else
		{
			putchar(c);
			++pos;
		}
	}
}
