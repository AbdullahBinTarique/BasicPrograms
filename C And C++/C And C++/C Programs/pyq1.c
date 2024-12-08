#include<stdio.h>

int main(){
    int row,a,b=1;
    printf("Enter number of rows \n");
    scanf("%d", &row);
    for (a=1;a<=row;a++)
    {for (int c=1;c<=a;c++,b++)
    printf("%d",b);
    printf("\n");
    }

    return 0;
}