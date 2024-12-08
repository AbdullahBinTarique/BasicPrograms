//Arrays ouput duplicate numbers
#include<stdio.h>

int main(){
    int num[]={1,23,45,23,11,12,43,1,11};
    int a,b,c;
    for (a=0;a<9;a++)
    for(b=a;b<9;b++){
        if((num[a]==num[b])&&(a!=b))
        {printf("%d\n",num[a]);
        break;}

    }
    return 0;
}