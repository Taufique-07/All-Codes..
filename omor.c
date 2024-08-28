#include<stdio.h>

int main()
{
    int r=6;

    for (int i = 0 , j= 0 ; i<r; i++,j++)
    {
        if(j<=i)
        {
            printf("%c",'a'+j);
        }
        else
        {
            j=-1;
            printf("*");

        }
        printf("%c\n",'C' + 2*i);
    }
    return 0;
}
