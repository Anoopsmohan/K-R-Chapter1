/* Write a program to print a histogram of the lengths of words in its input. */
#include<stdio.h>
main()
{
	int c,i=0,n=0,j=0,k=0;
	int count[15];
	for(i=0;i<15;i++)
		count[i]=0;

	while((c=getchar())!=EOF)
	{
		if(c==' ' || c=='\n' || c=='\t')
		{
			count[n]=j;
			j=0;
			++n;
		}
		else
			++j;
	}
	for(i=0;i<15;++i)
	{
		printf("%d\t",i+1);
		for(k=0;k<count[i];k++)
			printf("*");
		printf("\n");
	}
}
