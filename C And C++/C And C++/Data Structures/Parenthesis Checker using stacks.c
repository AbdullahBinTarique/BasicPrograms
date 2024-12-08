//Parenthesis checker using stack
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
char pop(char *str,int a){
    char c;
    c=str[a-1];
    str[a-1]='\0';
    //printf("%c\n",c);
    return c;

    }

void chk(char *str,int b){
   char *sarr=(char*)malloc(b*sizeof(char));
   char c;int flag=1;
   for(int a=0,d=0;a<b;a++){
    if((str[a]=='(')||(str[a]=='{')||(str[a]=='['))
    {puts("Now calling stack");
        sarr[d]=str[a];
    d++;}
    else if((str[a]==')')||(str[a]==']')||(str[a]=='}'))
    {puts("Now calling pop");
        c=pop(sarr,d);
   
    d--;
    
     if((c=='(')&&((str[a]==']')||(str[a]=='}')))
     {flag=0;
     printf("Check parenthesis\n");
     }
     else if(d==(-1))
     {printf("Check parenthesis\n");
     flag=0;
     
     }
     else if((c=='{')&&((str[a]==']')||(str[a]==')')))
     { flag=0;
        printf("Check parenthesis\n");
         }
     else if((c=='[')&&((str[a]=='}')||(str[a]==')')))
     { flag=0;
        printf("Check parenthesis\n");
         }
    if (flag==0)
    {printf("Your parenthesis are incorrect");   
    break;
    }

    }

   }
    if(flag==1)
     printf("Your parenthesis are algebraically correct\n");
}




int main(){
char *stack;int b;

puts("Calling insert");
stack=(char*)malloc(b*sizeof(char));
fflush(stdin);
gets(stack);
puts("Now calling chk");
chk(stack,strlen(stack));

return 0;
}