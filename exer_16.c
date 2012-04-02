/* Write a program to print the length of arbitrarily long input lines, and as much as possible of the text */

#include<stdio.h>
#define MAXLENGTH 1000
int get_line(char line[] , int n );
void copy(char longest[], char line[]);
main()
{
	int len,max=0;
	char line[MAXLENGTH];
	char longest[MAXLENGTH];
	while((len=get_line(line,MAXLENGTH))>0)
	{
		if(len > max)
		{
			max=len;
			copy(longest,line);
		}
	}
	if(max > 0)
	{
		printf("length = %d\n",max);
		printf("Longest line : %s\n",longest);
	}
	return 0;
}


// Read a line and return its length

int get_line(char line[], int n)
{
	int i,c;
	for(i=0; i<n && (c=getchar())!=EOF && c!='\n';++i)
		line[i]=c;
	if (c=='\n')
	{
		line[i]='\n';
		++i;
	}
	line[i]='\0';
	return i;

}


void copy(char to[], char from[])	
{
	int i=0;
	while((to[i]=from[i])!='\0')
		++i;
}
