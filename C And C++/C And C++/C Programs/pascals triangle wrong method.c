//Pascals triangle using loop
#include<stdio.h>
int main(){
    int row,i,j,k=3;
    printf("Enter the no. of rows for the pattern\n");
    scanf("%d",&row);
    int l=row;
    for(i=1;i<=row;i++) // printf("i");
    {
        for(int spc=1;spc<=row-i+1;spc++) //this loop will print space
        printf(" ");

        for(j=1;j<=i;j++){
        if(j==i)
        printf("1");
        else if(i>=4&&j>=2&&j<(i-2)) // try i>1&&i<j  
        printf("%d ",k);
        else
        {printf("%d ",j);
        }
        //else if (j)
        //   printf("%d ", );  
        //    k++;
        }
        printf("\n");
    }
    return 0;
}