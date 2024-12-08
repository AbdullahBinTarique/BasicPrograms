// rectangle shape hole between *
#include <stdio.h>

int main()
{
    int a, b = 1, c , thic = 2;
    printf("Enter the value of no.of rows and border length \nnote rows and thickness must be even digits\n\n");
    scanf("%d %d",&c,&thic);
    if(c%2!=0||thic%2!=0||c==2*thic&&c>thic)

    {printf("please read the above note carefully also\n rows must be greater than B.length &");
    printf("donot enter  rows and border length if rows is twice border length");}
    else

    for (a = 1; a <= c; a++)
    {
        if (a <= thic)
            for (b = 1; b <= c; b++)
                printf("*");
        if (a > thic && a <= c-thic)  //center part
        {
            for (b = 1; b <= c; b++)
            {
                if (b <= thic || b > c-thic)
                {
                    printf("*");
                }
                else
                        printf(" ");
            }
        //printf("\n");
        }
        else if (a >=c-thic)
            for (b = 1; b <= c; b++)
                printf("*");
        printf("\n");

        
    }
    return 0;
}