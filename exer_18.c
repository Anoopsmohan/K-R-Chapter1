/* write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines. */

#include<stdio.h>
#define MAXLINE 1000
int get_line(char line[], int n);
int removes(char line[]);
main()
{
	char line[MAXLINE];
	int len;
	while((len=get_line(line,MAXLINE))>0)
	{
		if(removes(line)>0)
			printf("%s",line);
	}
}
/* Read a line and return its length */
int get_line(char line[],int n)
{
	int i,c;
	for(i=0; i<n && (c=getchar())!=EOF && c!='\n';++i)
		line[i]=c;
	if(c=='\n')
	{
		line[i]='\n';
		++i;
	}
	line[i]='\0';
	return i;
}

/* Remove trailing blanks and tabs from each line of input */
int removes(char line[])
{
	int i=0;
	while(line[i]!='\n')
		++i;
	--i;
	
	while(i>0 && line[i]==' ' || line[i]=='\t')
		--i;
	if(i>0)
	{
		++i;
		line[i]='\n';
		++i;
		line[i]='\0';
	}
	return i;
}	
