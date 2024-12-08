//change value of variable to 10 times
#include<stdio.h>
void poi(int *b);
int main(){
    int a;
    printf("Enter a Number\n");
    scanf("%d",&a);
    printf("value of a before increment is %u\n",*(&a));
    poi(&a);
    printf("value of a after increment is %u\n",*(&a));

    return 0;
}
void poi(int *b){
int c;
*b=*(b)*10;
//*b=c;
return ;




 
}