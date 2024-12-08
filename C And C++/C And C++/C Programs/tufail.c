//tufail
#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,c;
    printf(" enter the height of the text\n Enter less than or = 9\n");
    scanf("%d", &c);
    for (a=1;a<=c;a++)
    {
        for(b=1;b<=9;b++)  //T
        {if(a==1)
        printf("*");
        else if(a>1&&b==5)
        printf("*");
        else 
        printf(" ");
        }
        printf(" ");
        
        for(b=1;b<=9;b++)    //u
        {if (a<c&&(b==1||b==9))
        printf("*");
        else if(a==c&&(b>=2&&b<=c-1))
        printf("*");
        else
        printf(" ");
        }
        printf(" ");

        for(b=1;b<=9;b++)    //F
        {
            if(a==1|| a==c/2+1||b==1)
            printf("*");
            else
            printf(" ");
            
        }
        printf(" ");
        
        for(b=1;b<=9;b++)    //A
        {
         if((a<c/2+1)&&(b==9/2+1-a||b==9/2+1+a)) 
         printf("*");
         else if(a==c/2+1&&(b==5-a||b==5+a||b==5))
         printf("*");
         else if((a>c/2+1)&&(b==1||b==9))
         printf("*");
         else
         printf(" ");
        }      
        printf(" ");    
        for(b=1;b<=9;b++)     //I
        {
            if(a==1||a==c)
            printf("*");
            else if((a>1&&a<c)&&(b==c/2+2))
            printf("*");
            else
            printf(" ");
        }
            printf(" ");
        for(b=1;b<=9;b++)    //L
        {
            if (a<c&&b==1)
            printf("*");
            else if(a==c)
            printf("*");
            else 
            printf(" ");

        }

        printf(" ");
        printf("\n");

    }
    getchar;

    return 0;
}