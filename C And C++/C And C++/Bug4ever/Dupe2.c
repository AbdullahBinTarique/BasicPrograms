#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t-- != 0){
        int s;
        int dupe = 0, missing = 0;
        scanf("%d",&s);
        int arr[s];
        for(int i = 0; i<s ; i++)
            scanf("%d",&arr[i]);
        for(int i = 0; i<s ; i++){
            if(i+1 != arr[i]){
                dupe = arr[i];
                missing = i+1;
                break;
            }
        }
        printf("%d %d",dupe,missing);
            
    }
    printf("\n");
    return 0;
}