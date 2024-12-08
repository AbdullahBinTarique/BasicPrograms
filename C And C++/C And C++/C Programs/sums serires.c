// summation of series using recursion
#include <stdio.h>
int sums();

int main()
{
    int a;
    printf("Enter values  NO.\n");
    scanf("%d", &a);
    sums(a);
    printf("%d", sums(a));

    return 0;
}

int sums(int a)
{
    int b;
    if (a == 1)
    {
        printf("1\n");
        return 1;
    }
    else
    {
        b = a + sums(a - 1);
    }
        printf("%d\n", b);
        return (b);
}