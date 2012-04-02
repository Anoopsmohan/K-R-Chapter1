/* Program to count the number of words, lines and characters in input */
#include<stdio.h>
#define IN 1
#define OUT 0
main()
{
        int nl,nw,nc,c,state;
        nl=nw=nc=0;
        state=OUT;
        while((c=getchar())!=EOF)
        {
                ++nc;
                if(c=='\n')
                        ++nl;
                if(c == ' ' || c == '\t' || c=='\n')
                        state=OUT;
                else if(state==OUT)
                {
                        state=IN;
                        ++nw;
                }

        }
        printf("Number of lines : %d\nNumber of characters : %d\nNumber of words : %d\n",nl,nc,nw);
}

