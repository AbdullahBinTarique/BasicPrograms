    //postfix to infix  evaluation
    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    #include<ctype.h>
    #include <math.h>

    
    void push(float *stack, float a)
    { int b=0;
        while(stack[b]!='\0')b++;
        if(b==0)
        stack[b]=a;
        else
        stack[b]=a;
  
    }
    float pop(float *stack){
        int b=0;float c;
        while(stack[b]!='\0')b++;
        c=stack[b-1];
        stack[b-1]='\0';
        return c;

    }

void detection(int a,float *stack){
    switch(a){
        case 1: {push(stack,pop(stack)+pop(stack));
        break;
        }


        case 2: {int c=pop(stack);
        int d=pop(stack);
        push(stack,d-c);break;}

        case 3: {push(stack,pop(stack)*pop(stack));break;}

        case 4: {push(stack,((float)(1/pop(stack))*pop(stack)));break;}

        case 5: {float c=pop(stack);
        float d=pop(stack);
        push(stack,(int)(d)%(int)(c));
        break;}

        case 6: {float c=pop(stack);
        float d=pop(stack);
        push(stack,pow(d,c));
        break;}
    }
}

int presedence(char a,float *stack){
    if(a=='+')detection(1, stack);
    else if(a=='-')detection(2, stack);
    else if(a=='*')detection(3, stack);
    else if(a=='/')detection(4, stack);
    else if(a=='%')detection(5, stack);
    else if(a=='^')detection(6, stack);
    
}


    
   int main(){float *stack=(float*)calloc(10,sizeof(float));
   char *exp=(char*)calloc(10,sizeof(char));
   puts("Enter an expression");
   gets(exp);
   for(int a=0;a<strlen(exp);a++){
    if(exp[a]-'0'>=0&&exp[a]-'0'<=9)
    {
        push(stack,(exp[a]-'0'));//int b=0;
        // while (stack[b]!='\0')b++;
        // printf("%f\n",stack[b-1]);
    }
    else if(exp[a]=='+'||exp[a]=='-'||exp[a]=='*'||exp[a]=='/'||exp[a]=='^'||exp[a]=='%'){
         presedence(exp[a],stack)  ;    
    }


   }
   int b=0;
     while (stack[b]!='\0')b++;
   printf("%.2f\n",stack[b-1]);

    return 0;
   }

    