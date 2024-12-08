//functions
#include<stdio.h>
void Play(); //function prototype
int main(){
    int a, b=3, c=2;
 
    do{
    printf("enter values of A from 1 to 5\n");
    scanf("%d", &a);
    c--;
    if(a==3)
        {Play();}
    else
        {c=2;}
    }
    while(c>=2);
    return 0;
}

void Play(){
    printf("How long do you wanna play\n");
}