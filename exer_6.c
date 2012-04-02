/* Verify that the expression getchar() != EOF is 0 or 1  */

#include<stdio.h>
main()
{
	int c;
	while(c=(getchar()!=EOF))
	{
	        printf("%d\n",c);
	}
}
