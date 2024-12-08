// addition of two number using call by reference
#include <stdio.h>
void add(int *a, int *b, float *sum, float *avg)
{
    *sum = *a + *b;
    *avg = (float)*sum / 2;
    return;
}

int main()
{
    int a, b;
    float sum = 0, avg = 0;
    printf("Enter the numbers which you want to add.\n");
    scanf("%d %d", &a, &b);
    add(&a, &b, &sum, &avg);
    printf("The value of sum is %f\n and avg is %f", sum, avg);

    return 0;
}