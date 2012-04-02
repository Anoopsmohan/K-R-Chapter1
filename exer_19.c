/* Write a function reverse(s) that reverses the character string s. Use it to write a program that reverses its input a line at a time */
#include<stdio.h>
#define MAXLINE 1000
void reverse(char to[], char from[],int n);
main()
{
	char line[MAXLINE];
	char rev[MAXLINE];	
	int c,i=0;
	while((c=getchar())!=EOF && c!='\n')
	{
		line[i]=c;
		++i;
	}
	if(c=='\n')
	{
		line[i]='\n';
		++i;
	}
	line[i]='\0';
	reverse(rev,line,i-1);
	printf("%s\n",rev);
	return 0;
}

void reverse(char to[], char from[],int len)
{
	int i=0;
	while(to[i]=from[len])
	{
		++i;
		--len;
	}
}
	
