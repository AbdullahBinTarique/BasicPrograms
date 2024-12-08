#include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    #include<ctype.h>
    void main(){char exp[ ]="1 / 2 + 3 - 4";int b;
        for(int a=0;a<strlen(exp);a++){
    
   
    sscanf(exp,"%d" ,&b);
    printf("%d", b+1);

    
    }
    }