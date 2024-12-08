#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#define dma
//#define peek //empty
//#define stac
//#define pop
//#define push
//#define Insert
int main(){
   #ifdef dma
  { int n ; char* stack;
   char str[100];
 //This code is for dyna mem alloc
   printf("Enter the string\n");
   gets(str);
   n=strlen(str);
   fflush(stdin);    
   stack =(char*) malloc(n * sizeof(char));
   strcpy(stack,str);
   puts(stack);
   //printf("\n%d %d ",n ,sizeof(stack));
   return 0;}
   #elif defined (peek)//This code points to the Peak value of stack.
  {
      int n; char *stack; char str[100];char * peak;
      printf("Enter a string into stack\n");
      gets(str);
      n=strlen(str);
      stack=(char*)malloc(n*sizeof(char));
      strcpy(stack,str);
      peak=&(stack[n-1]);
      puts(stack);
      printf("THE PEAK CHAR IS \n%c ", *peak);
   
      return 0;
   }
   #elif defined stac//This code checks whether stack is full or under full.  
     {               //or its empty.
      int n;  char stack[10];char * peak;
      printf("Enter a string into stack\n");
      gets(stack);
      n=strlen(stack);
      peak=&stack[n-1];//Why n-1 and not n.
      fflush(stdin);
      puts(stack);
      printf("\n%c ", *peak);//for empty its printing 0 as peak value why
      printf("\n%d ", n);
      if (stack[n]=='\0')
      printf("The stack is empty\n");     
      else if (n<10)
      printf("The stack is underfull you can input %d more values \n",10-n);
      else
      printf("The stack is full\n");
      return 0;
   }
   #elif defined pop //for pop function of stack.
    {
      int n,num;  char stack[100];char * peak;
      int a=0;
      printf("Enter a string into stack\n");
      gets(stack);
      n=strlen(stack);
      printf("Enter no. of elements you wanna pop\n");
      scanf("%d",&num);
      for (a;a<num;a++){
         stack[n-a-1]='\0';

      }
      n=n-a;
      fflush(stdin);
      puts(stack);
      peak=&stack[n-1];
      printf("\n%c ", *peak);
      printf("\n%d ", n);
      printf("\n%c ", stack[n-1]);
    }
   #elif defined push
   {
      int n,num;  char *stack;
      int a=0;
      stack=(char*)malloc(50*sizeof(char));
      printf("Enter a string into stack\n");
      gets(stack);
     // n=strlen(stack);
      printf("Enter elements you wanna push\n");
//      scanf("%d",&num);
      fflush(stdin);
    
      
        char *bfr=(char*)malloc(10*sizeof(char));
         gets(bfr);
         strcat(stack,bfr);// the size of array "stack" has been reduce still its printing complete name how
         free(bfr);
         puts(stack);
      
     }
   #elif defined Insert
      {
      int n,num,pos;  char *stack;char * bfr;
      stack=(char*)malloc(10*sizeof(char));
      printf("Enter a string into stack\n");
      gets(stack);
      n=strlen(stack);
      printf("Enter pos^n of elements you wanna push\n");
      scanf("%d",&pos);
      int temp=pos;
      
      printf("Enter number of elements you wanna push\n");
      scanf("%d",&num);
      fflush(stdin);
      if ((num+n)<=10)
      {
         bfr=(char*)malloc(num*sizeof(char));
          {int m=0;
         while( m<num)
         {for(n;n>temp;n--){
            stack[n+1]=stack[n];
         }
         n=strlen(stack);//In order to repeat loop to shift num times 
         n++;            //if want to enter more than 1 element
         m++;
         temp++;
         };}
         printf("Enter the Elements\n");
         gets(bfr);
         fflush(stdin);
         for(int l=0;l<num;l++){
            stack[pos+1]=bfr[l];
            pos++;
         }
         free(bfr);
         puts(stack);
        // printf("%c\n",1);
      }
      else if(num+n>10)
      {
         stack=(char*)realloc(stack,(num+10)*sizeof(char));
         bfr=(char*)malloc(num*sizeof(char));
         {int m=0;
         while( m<num)
         {for(n;n>temp;n--){
            stack[n+1]=stack[n];
         }
         n=strlen(stack);
         n++;
         m++;
         temp++;
         };}
         printf("Enter the Elements\n");
         gets(bfr);
         fflush(stdin);
         for(int l=0;l<num;l++){
            stack[pos+1]=bfr[l];
            pos++;
         }
         free(bfr);
         puts(stack);

      }}
   #endif


}