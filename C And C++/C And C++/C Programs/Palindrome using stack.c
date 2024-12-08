#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char pop(char *arr,int n){
char *top=&arr[n-1];
char c=*top;
top--;
return c;

}

int main(){//this is to check whether given string is palindrome or not
char* str,*stack;int n,temp,flag=1;
str=(char*)malloc(10*sizeof(long));
puts("Enter string");
gets(str);
n=strlen(str);
temp=n;
stack=(char*)malloc(n*sizeof(char));
if(n%2==0)
{
    temp=n/2;
    strncpy(stack,str,(temp));
    for(int a=0;a<(n/2);a++)
    {int c=pop(stack,n);
    temp--;
    if(stack[a]!=c)
    {flag=0;
    break;
    }
    }
    if(flag==0)
    puts("Entered string is not a palindrome");
    else
    puts("Entered string is a palindrome");
}
else
{
    temp=(n/2)+1;
    strncpy(stack,str,(temp-1));
    for(int a=0;a<(n/2);a++)
    {int c=pop(stack,n);
    temp--;
    if(stack[a]!=c)
    {flag=0;
    break;
    }
    }
    if(flag==0)
    puts("Entered string is not a palindrome");
    else
    puts("Entered string is a palindrome");

}


return 0;
}