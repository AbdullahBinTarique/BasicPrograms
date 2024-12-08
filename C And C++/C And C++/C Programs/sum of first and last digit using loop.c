//sum of first and the last digit using loop
#include<stdio.h>
#include<math.h>

int main(){
    int num,pow10,n=1;
    printf("Enter the Number\n");
    scanf("%d", &num);
    pow10=pow(10,n);
    for (num ;num>0;n++ )
    {
        num=num/10;
        printf("%d\n", n);
    }

  //  for (n ; ;n++ )

    return 0;
}