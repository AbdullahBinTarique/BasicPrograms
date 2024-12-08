#include<Stdio.h>
//selection sort
int main(){
    int arr[]={3,1,4,2,6,12,7,5};
    int index=0,min=0;
    
    for(int a=0;a<8;a++){
    //find minimum
    
    min=arr[a];
    for(int b=a;b<8;b++){
        if(min>arr[b])
        {min=arr[b];
        index=b;
        if(index!=a)
        arr[index]=arr[a];
        arr[a]=min;
        }
        
    }
    //replace
    
    }

    //print
    for(int a=0;a<8;a++)
    printf("%d ",arr[a]);
    
    return 0;
}