#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
//This programs inserts onto top of stack
int main(){
char *str;int n,top;

str=(char*)malloc(n*sizeof(char));
puts("Enter no. of elements you wanna enter char by char");
scanf("%d",&n);
str[0]='\0';
for(int a=0;a<n;a++)
{str[a+1]='\0';
fflush(stdin);
scanf("%c",&str[a]);
}
puts(str);
return 0;
}