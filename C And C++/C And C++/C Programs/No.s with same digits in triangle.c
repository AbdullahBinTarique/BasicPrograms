/*triangle with same no.s*/
#include<stdio.h>

int main(){
    int i=1, j=1, rows, d=1;
 
    for (i = 1;i<= 10; i++){
        
        for(j = 1; j<=i; j++){
        printf("%d", d);
      //  else{
      //      d=0;//
      //  }
        
       if(j==i)
       d=1;
        else{d++;}
        

        }
        
        printf("\n");
        
        //n++;
        }
    
       
    return 0;
}