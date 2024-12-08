/*triangle with same no.s*/
#include<stdio.h>

int main(){
    int i=1, j=1, rows, d=1, k;
 printf("Enter values from 1 to 9\n");
 scanf("%d", &rows);
 k= rows ;
 ;
 if(rows>=10)
 printf("Ek baar me Samajh nahi aaya kya Enter from1 to 10");
 else{
    for (i = 1;i<=rows; i++){
        
     //   for (k=pows ; k >= 0; pows--)
     //  printf(" ");
        
        for(j = 1; j<=i; j++){
     if(j<i)
     d=i;
        printf("%d", d);


        }
        
        printf("\n");
        }
}
    
       
    return 0;
}