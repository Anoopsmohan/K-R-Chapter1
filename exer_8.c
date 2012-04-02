/* Program to count blanks, tabs and newlines */

#include<stdio.h>
main()
{
        int blank, tab, newline;
	int c;
	blank=0;
	tab=0;
	newline=0;
	while((c=getchar())!= EOF)
	{
		if (c ==' ')
			++blank;
		if (c == '\t')
			++tab;
		if (c == '\n')
			++newline;
	}
	printf("blanks : %d\nTabs : %d\nLines : %d\n",blank,tab,newline);
}
