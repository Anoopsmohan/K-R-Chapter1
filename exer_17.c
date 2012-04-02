/* Write a program to print all input lines that are longer than 80 characters */

#include<stdio.h>
#define MAXLINE 1000
int get_line(char line[], int n);

main()
{
	int len,max;
	char line[MAXLINE];
	while((len=get_line(line, MAXLINE))>0)	
	{
		if(len > 80)
		{
			printf("%s\n",line);
		}
	}
}

int get_line(char line[], int n)
{
	int i,c;
	for(i=0;i<n-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		line[i]=c;
	if(c=='\n')
	{
		line[i]='\n';
		++i;
	}
	line[i]='\0';
	return i;
}
