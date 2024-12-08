#include<stdio.h>
#include<stdlib.h>

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
void display(int *arr,int El){
for (int a=0;a<El ;a++)
printf("%d",arr[a]);

}
int main(){int EL=10;
int *arr=(int*)malloc(10*sizeof(int));
printf("Enter array \n");
for (int a=0;a<10;a++){
scanf("%d",&arr[a]);
}

 sort (arr,EL);
display(arr,EL);
    return 0;
}