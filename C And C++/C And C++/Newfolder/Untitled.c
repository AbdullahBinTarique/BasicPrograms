#include<stdio.h>
#include<stdlib.h>
short int T;int n,*e,c=0;
void Input(){
    scanf("%hu",&T);
    scanf("%d",&n);
    if(T>=1000)
        exit(0);
    if(n>=100000)
        exit(0);
    
    e=(int*)malloc(n*sizeof(int));
    for(int i=0;i!=n;i++)
        scanf("%d",&e[i]);
}
void PyTh3(){
    
    for(int i=0;i<=n;i++){
        for(int j=i;j<=n;j++){
            for(int k=j;k<=n;k++){
                if(e[i]+e[j]<e[k])
                    continue;
                if(e[i]*e[i]+e[j]*e[j]==e[k]*e[k])
                    c++;
            }
        }
    }
}
int main(){
    printf("Input\n");
    Input();
    PyTh3();
    printf("Output\n%d",c);
    return 0;
}