/* Write a program to remove all comments from a C program. Don't forget to handle quoted strings and character constants property. C comments do not nest. */

#include<stdio.h>
void rcomment(int c) ;
void inside_comment(void);
void quote(int c);
main()
{
	int c;
	while((c=getchar())!=EOF)
		rcomment(c);
	return 0;
}

/* Read each character, remove the comments */
void rcomment(int c)
{
	int d;
	if (c=='/')
	{
		if((d=getchar())=='*')
			inside_comment();
		else if(d=='/')
		{
			putchar(c);
			rcomment(d);
		}
		else
		{
			putchar(c);
			putchar(d);
		}
	}
	else if(c=='\'' || c=='"')
		quote(c);
	else
		putchar(c);
}

/* Inside of a valid comment */

void inside_comment()
{
	int c,d;
	c=getchar();
	d=getchar();
	while(c!= '*' || d!='/')
	{
		c=d;
		d=getchar();
	}
}

void quote(int c)
{
	int d;
	putchar(c);
	while((d=getchar())!= c)
	{
		putchar(d);
		if(d=='\\')
			putchar(getchar());
	}
	putchar(d);
}
