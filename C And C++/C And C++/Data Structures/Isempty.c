#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void str(char* a){
    if(strlen(a)==0)
    printf("The string is empty\n");
    else if(strlen(a)!=0)
    printf("The string has some values\n");
    printf("%c\n",a[strlen(a)-1]);
    
}
int main(){
    char abc[10];
    puts("Enter a string ");
    gets(abc);
   // printf("%d\n",strlen(a));
   // printf("%c\n",str[strlen(a)-1]);
    str(abc);
    return 0;
}