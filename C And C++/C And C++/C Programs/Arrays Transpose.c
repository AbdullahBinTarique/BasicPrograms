//Arrays
#include<stdio.h>

int main(){
    int M1[3][3];
    int a,b;
    printf("Enter your 3x3 Matrix\n");
    for(a=0;a<3;a++)
     {for(b=0;b<3;b++)
         {printf("Your element i%d , j%d :", a+1,b+1);
         scanf("%d", &M1[a][b]);}}
    printf("Your Entered Matrix is\n");
    for (a=0;a<3;a++)
         {for(b=0;b<3;b++)
             printf("%d ", M1[a][b]);
             printf("\n");}
    printf("The transpose of Matrix is \n");
    for (a=0;a<3;a++)
         {for(b=0;b<3;b++)
             printf("%d ", M1[b][a]);
             printf("\n");}

        return 0;
}