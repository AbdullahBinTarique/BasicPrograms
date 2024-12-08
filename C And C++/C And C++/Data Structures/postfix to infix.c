//postfix to infix
#include<stdio.h>      // one else if portion is remaining,for this AB+CDE+*- its not working properly
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define op(p) (p == ('+') || p == ('-')||p == ('*') || p == ('/') || p == ('^') || p == ('%'))
#define ascii(a) (((a >= (char)(97)) && (a <= (char)(122))) || ((a >= (char)(65)) && (a <= (char)(90))))

void push(char *x, char a)
{ //

  x[strlen(x)] =a;
  x[strlen(x)] = '\0';
}

char pop(char *p)
{ /* printf("%cad", p[strlen(p)-1]);*/char s;
 s=p[strlen(p) - 1]; p[strlen(p) - 1] ='\0';
 return s;
}
void shift(char *p)
{p[strlen(p)]='\0';
for (int a=strlen(p) ;a>0;a--){
  p[a]=p[a-1];
}

puts(p);
}


int prev(char *p)
{

  if (p[(strlen(p) - 1)] == '+' || p[(strlen(p) - 1)] == '-')
    return (0);
  else if (p[(strlen(p) - 1)] == '*' || p[(strlen(p) - 1)] == '/' || p[(strlen(p) - 1)] == '^' || p[(strlen(p) - 1)] == '%')
    return 0;
  else if (p[(strlen(p) - 1)] == (')'))
    return 1;
}


int main(){
    char *exp=(char*)malloc(10*sizeof(char));char *stack=(char*)calloc(10,sizeof(char));
    printf("Enter a postfix Algebraic expression\n");
    gets(exp);
    for(int a=0;a<strlen(exp);a++){
        if(ascii(exp[a]))
        push(stack,exp[a]);
        
        else if(op(exp[a-2]) && op(exp[a])){
          char *newstr=(char*)malloc(1*sizeof(char));char c=pop(stack);
          newstr[0]=exp[a];newstr[1]=c;newstr[2]=')';
          strcat(stack,newstr);
          free(newstr);
        }
        else if(ascii(exp[a-1]) && op(exp[a])){
          char d=pop(stack);char c=pop(stack);char *newstr=(char*)malloc(1*sizeof(char));
          newstr[0]='(';newstr[1]=c;newstr[2]=exp[a];newstr[3]=d;newstr[4]=')';
          strcat(stack,newstr);
          free(newstr);
        }
         else if(op(exp[a])&&stack[strlen(stack)-1]==')'){
         int b=strlen(stack)-1;char *newstr=(char*)calloc(1,sizeof(char));int c=0;
         do{
          
          newstr[c]=pop(stack); 
          b--; 
          c++; 
          } while(stack[b]!='(');
          newstr[c]=pop(stack);
        strrev(newstr);
        for( c=1;c>0;c--){
          shift(newstr);
        }
        newstr[0]=exp[a];
         //strcpy(newstr,"-");
        strcat(stack,newstr);    
          free(newstr); 
         }
         //else if()

    }
    
   puts(stack);
    
    
    
    return 0;

}