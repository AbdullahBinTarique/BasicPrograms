#include <stdio.h>
#include <stdlib.h>


short unsigned Test;int d=0;
unsigned int Len;

void chk(int *arr,int Elements){
for (register int a=0;a<Elements;a++){
for (register int b=a+1;b<Elements;b++){

if(arr[a]==arr[b])
arr[b]=999999999;

}
}
// for(int l=0;l<Elements;l++){
//      printf("%d",arr[l]);

//  } 

}

void sort(int *arr,int El){
for(int a=0;a<El;a++){
        for(int b=0;b<El;b++){
            if(arr[b]>=arr[a])
          {int temp=arr[b];
          arr[b]=arr[a];
          arr[a]=temp;
        }}

}
}

void InputElements(int Elements, int *arr)
{ // for scanning the variables
    for (int temp = 0; temp < Elements; temp++)
    {
        scanf("%d", &arr[temp]);
    }
    fflush(stdin);
    sort(arr,Elements); 
//     {for(int l=0;l<Elements;l++){
//     printf("%d",arr[l]);

// } 
//  }
                chk(arr,Elements);
     
    for (int a=0; a < Elements; a++)
        {
            for (int b=a; b < Elements; b++)
            {
                for (register int unsigned c=b; c < Elements; c++)
                { fflush(stdin);
                    
                    if(arr[a]*arr[a]+arr[b]*arr[b]==arr[c]*arr[c])
                    d++;
                     
                }
            }
        }  
        printf("%d\n",d);   
    d=0;  
}  


void PyTrip(int Testcases,int *arr)
{  int Elements;



    for (Testcases; Testcases > 0; Testcases--)
    {  
scanf("%u", &Elements);
    fflush(stdin);
    if((Elements<1)||(Elements>99999))
    exit(0);
    InputElements(Elements,arr); 
     
    }
}

int main()
{
     

    scanf("%hu", &Test);
    
    
    if ((Test>999)||(Test<1))
    {
     
        exit(0);
    }
    else
    {

        
        int arr[99999];
        PyTrip(Test,arr);
       
    }
    return 0;
}
