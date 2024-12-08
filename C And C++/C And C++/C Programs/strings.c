#include<stdio.h>

int main(){
    char arr[34];
    char c;
    int i=0;
    while(c!='\n')
    {fflush(stdin);
    gets(arr);
    arr[i]=c;
    i++;
    
    }
    puts(arr);
    
    return 0;
