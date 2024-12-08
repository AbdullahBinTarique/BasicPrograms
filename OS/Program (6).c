#include<stdio.h>
#include<stdlib.h>
//fcfs
// int main(){
//     int ioq[]={98,183,37,122,14,124,65,67};
//     int start=53;
//     int sum=ioq[0]-start;

//     
//  for(int a=0;a<7;a++){
//     sum+=abs(ioq[a+1]-ioq[a]);
// }
// printf("Seek time is %d ",sum);


//     return 0;
// }

//sstf
int main(){
    int ioq[]={98,183,37,122,14,124,65,67};
    int index=0,min=1000,head=53,sum=0;
    // for(int a=0;a<8;a++){
    //     if(ioq[a]==start)
    //     index=a;
    // }
   

    for(int a=0;a<8;a++){
        
        for(int b=0;b<8;b++){
            if(abs(ioq[b]-head)<min)
           { min=abs(ioq[b]-head);
            index=b;
            sum+=min;
    head=ioq[index];
    ioq[index]=1000;
    printf("%d seektime",head);
            }
        }
        
    
    
    }
    printf("%d seektime",sum);

    return 0;
}