//Arrays sorting the numbers in ascending order
#include<stdio.h>

int main(){
    int num[]={31,12,43,5,42,6,52,87,9};
    int temp,b;
    for(int a=0;a<9;a++)
    {
        for(b=0;b<9;b++)
        {if ((num[b]>num[b+1])&&(b<8)&&(a<=8))
        {temp=num[b];
        num[b]=num[b+1];
        num[b+1]=temp;}
        else if (b==8&&a==8)
        num[8];
        }
        

    }
    printf("The arranged order is ");
    for(int a=0;a<9;a++)
    printf("%d ",num[a]);
    return 0;
}