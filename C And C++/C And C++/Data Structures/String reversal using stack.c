#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char pop(char *arr, int n)
{
    char *top = &arr[n - 1];
    char c = *top;
    top--;
    return c;
}

int main()
{ // this is for string reversal program using stack operations
    char *str, *stack;
    int n, temp;
    str = (char *)malloc(10 * sizeof(long));
    puts("Enter string");
    gets(str);
    n = strlen(str);
    temp = n;
    stack = (char *)malloc(n * sizeof(char));
    strcpy(stack, str);
    puts("The Reversed string is ");
    for (int a = 0; a < n; a++)
    {
        printf("%c", pop(stack, temp));
        temp--;
    }
}