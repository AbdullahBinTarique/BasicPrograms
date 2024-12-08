/*pyramid*/
#include<stdio.h>

int main(){
    int rows= 1, b= 1, nspc =4, spc= 1, norows= 4;
    for (rows; rows<=norows ; rows++){
    for ( spc ; spc<=nspc; spc++){
    printf("  ");}
    for ( b ; b<=rows ; b++ ){
    printf("%d   ",b);}
    nspc--;
    spc=1;
    b=1;
    printf("\n");
    }
    
    return 0;
}