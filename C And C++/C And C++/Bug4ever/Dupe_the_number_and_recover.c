#include <stdio.h>
#include <stdlib.h>
// dupe the number and recover
int main()
{
    int t,i=0;
    scanf("%d", &t);
    
    int arrt[t],arro[1024];
    fflush(stdin);
    for(int b=0;b<t;b++){
        
        scanf("%d",&arrt[b]);
        fflush(stdin);
        }
    for(int b=0;b<t;b++){
        int arr[arrt[b]];
    for(int a=0;a<arrt[b];a++)
    scanf("%d",&arr[a]);
    
    for (int a = 0; a < arrt[b]; a++)
        {
            if ((a + 1) != arr[a])
            {
                arro[i]=arr[a];
                i++;
                arro[i]=a+1;
                i++;
            }
        }
        fflush(stdin);
    
    }
    for(int a=0;a<i;a++)
    printf("%d ",arro[a]);
    
    
    
    
    // for (int b = 0; b < t; b++)
    // { 
    //     scanf("%d", &n);
    //     int arr[n];
    //     for (int a = 0; a < n; a++)
    //     {
    //         scanf("%d", &arr[a]);
    //     }

    //     for (int a = 0; a < n; a++)
    //     {
    //         if ((a + 1) != arr[a])
    //         {
    //             printf("%d ", arr[a]); // duplicate
    //             arr[a] = a + 1;
    //             printf("%d ", arr[a]);
    //         } // replaced
    //     }
    //     fflush(stdin);
    // }

    return 0;
}