/* Write a program to print a histogram of the frequencies of different characters in its input. */

#include<stdio.h>
main()
{
	int c,i,d,k;
	int count[26];
	for (i=0;i<26;i++)
		count[i]=0;

	while((c=getchar())!=EOF)
	{
		if(c!=' ' || c!='\n' || c!='\t')
		{
			++count[c-'a'];
		}
	}
	for(i=0;i<26;++i)
	{ 
		d='a'+i;
		putchar(d);
		printf("\t");
		for(k=0;k<count[i];++k)
			printf("*");
		printf("\n");
	}
}
