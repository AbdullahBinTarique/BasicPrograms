// arrays
#include <stdio.h>

int main()
{
    int arr[10];
    int *a;
    a=&arr[0];
    for (int a = 0, b = 5; a < b; a++)
    {
        printf("Enter the numbers: ");
        scanf("%d", &arr[a]);
    }
    for (int a = 0, b = 5; a < b; a++)
    {
        printf("The Entered numbers are %d\n", arr[a]);
    }
    printf("The third Element is : %d ", *(a +2));
    printf("The third Element is : %d ", *(arr + 2));
    return 0;
}