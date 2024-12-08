/*Triangle made with No.*/
#include<stdio.h>

int main(){
    int i=1, j=1, rows, d=1;
 
    for (i = 1;i<= 10; i++){
        for(d=1,j = 1;j<=i;j++){
        printf("%d", d);
        d++;

        }
        printf("\n");
        }
    
       
    return 0;
}