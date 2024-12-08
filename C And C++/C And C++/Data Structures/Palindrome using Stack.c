#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
// String Palindrome checker
char pop(char *str, int n)
{
    char top = (str[n - 1]);
    (str[n - 1]) = '\0';
    return top;
}
int main()
{
    char *stack, *bfr;
    char c;
    int b, flag = 1;
    stack = (char *)malloc(10 * sizeof(char));
    bfr = (char *)malloc(10 * sizeof(char));
    puts("Enter Your string ");
    gets(bfr);
    int n = strlen(bfr);
    b = n;
    strcpy(stack, bfr);
    if (n % 2 == 0)
    {
        for (int a = 0; a < n / 2; a++)
        {
            c = pop(stack, b);
            b--;
            if (stack[a] != c)
                flag = 0;
        }
        if (flag == 1)
            puts("Entered String is a palindrome");
        else
            puts("Entered string is not a palindrome");
    }
    else if (n % 2 == 1)
    {
        for (int a = 0; a <= n / 2; a++)
        {
            if (!(n / 2))
            {
                c = pop(stack, b);
                b--;
                if (stack[a] != c)
                    flag = 0;
            }
        }
        if (flag == 1)
            puts("Entered String is a palindrome");
        else
            puts("Entered string is not a palindrome");
    }

    return 0;
}