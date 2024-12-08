#include<stdio.h>
//prime numbers frrom 100 to 500

int main(){
    int b,num,c;
    printf("The Prime numbers are \n");
    for(num=100;num<=500;num++)
   for(c=2;c<=num;c++)
    {b=num%c;
    /*if(c!=num&&b==0){
        printf("The number is a composite No.\n");
        
    }
    else */if(b==0&&c==num)
    {
    printf("The number is a prime No. %d\n",num);
    
    break;
    }
    }
    
    return 0;
}