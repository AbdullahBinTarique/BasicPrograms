//Multiplication of 2 Arrays
#include<stdio.h>

int main(){
    int arr1[3][3]={1,2,3,4,5,6,7,8,9};
    int arr2[3][3]={9,8,7,6,5,4,3,2,1};
    int arr3[3][3];
    int c,d;
    for (int a=0;a<3;a++)
    {for (int b=0;b<3;b++)
    printf("%d ",arr1[a][b]);
    printf("\n");
    
    }
    printf("\n");

    for (int a=0;a<3;a++)
    {for (int b=0;b<3;b++)
    
    {printf("%d ",arr2[a][b]);}
    printf("\n");
    }
    printf("Your multiplied Matrix is \n");
    
    {
    for (int c=0,a=0;a<3;a++)
    {
    for (int k=0,d=0,b=0;b<3;b++)
    {
    arr3[c][d]=(arr1[a][k]*arr2[k][b])+(arr1[a][k+1]*arr2[k+1][b])+(arr1[a][k+2]*arr2[k+2][b]);
    d++;
    }
    c++;
    }
    for (int c=0;c<3;c++)
    {for (int d=0;d<3;d++)
    printf("%d ",arr3[c][d]);
    printf("\n");
     }
    }

    return 0;
}