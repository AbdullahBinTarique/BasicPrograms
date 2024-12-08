//Arrays ouput unique numbers
#include<stdio.h>

int main(){
    int num[]={1,23,45,23,11,12,43,1,11};
    int a,b,ctr;
    for (a=0;a<9;a++)
    {ctr=0;
    for(b=0;b<9;b++){
       
        if((num[a]==num[b])&&(a!=b))
        ctr++;}
        if(ctr==0)
        printf("%d ",num[a]);
         
        


    
    }
    return 0;
}