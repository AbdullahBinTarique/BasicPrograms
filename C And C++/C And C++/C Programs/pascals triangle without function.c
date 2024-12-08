// pascal

#include <stdio.h>
int ncr(int n){
    float c, b;
    int r;
   int e = 0, d = 1;    //nfact
    int f = 0, g = 1;   //rfact
     int h = 0, i = 1;   //n-rfct  
    //printf("enter values of n and r for ncr\n");
    //scanf("%d %d", &n, &r);
    for (r=0;r<=n;r++)
    {for (e= 0; e <= n; e++)
    {   if (e == 0)
            d = 1;
        else
            d *= e;}
    for (f = 0; f <= r; f++)
    {   if (f == 0)
            g = 1;
        else
            g *= f;}
    for (h = 0; h <= (n-r); h++)
    {   if (h == 0)
            i = 1;
        else
            i *= h;}
    //c = d / (i);
    b = d / ((g) * (i));
    printf("%d ",(int)b);
}
    return 0;
}
//Pascals triangle using loop

int main(){
    int row,i,j,k=3;
    printf("Enter the no. of rows for the pattern\n");
    scanf("%d",&row);
    int l=row;
    for(i=0;i<=row;i++) // printf("i");
    {
        for(int spc=1;spc<=row-i+1;spc++) //this loop will print space
        {printf(" ");

        //for(j=1;j<=i;j++){
        //printf("%d ",ncr(i));
        
        }
        ncr(i);        
        printf("\n");}
    return 0;
    }
