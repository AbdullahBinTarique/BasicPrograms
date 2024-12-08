#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main(){
int arr[3][3],test;
scanf("%d",&test);//Input test cases

for(int i=0;i<3;i++){   //Input matrix
    for(int j=0;j<3;j++)
    scanf("%d",&arr[i][j]);
}
for(int i=0;i<3;i++){   //output matrix
    for(int j=0;j<3;j++)
    printf("%d",arr[i][j]);
    printf("\n");
}



    return 0;
}