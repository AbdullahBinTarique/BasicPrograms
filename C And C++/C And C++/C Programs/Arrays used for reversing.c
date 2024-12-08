//Array 3 reversing the array 
#include<stdio.h>
void rev(int s[]){
    int temp[10];
    int a;
    for(a=1;a<=10;a++)
    temp[10-a]=s[a-1];
    for(a=1;a<=10;a++)
    s[a-1]=temp[a-1];
    //return s[a];
}

int main(){
    int b=1,c,temp[10],d;
    int s[10];
    printf("Enter any number to get its table\n");
    scanf("%d",&c);
   
    for (int a=1;a<=10;a++)
    {b=c*a;
    s[a-1]=b;}
    for (int a=1;a<=10;a++)
     {printf("The table of %d is %d\n", c,s[a-1]);}
     rev(s);
    // for(d=1;d<=10;d++)
    //temp[10-d]=s[d-1];
    //for(d=0;d<10;d++)
    //s[d]=temp[d];
    
    for (int d=1;d<=10;d++)
    printf("The reverse table is %d\n",s[d-1]);
    

    return 0;
}