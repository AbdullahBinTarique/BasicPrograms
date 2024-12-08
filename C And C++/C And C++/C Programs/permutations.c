// permutations and combinations formula

#include <stdio.h>
int factn();
int factr();
int factdiff();

int main()
{
    float a, l, c, b;
    int r, n, t,p;
    printf("enter values of n and r for ncr\n");
    scanf("%d %d", &n, &r);
    t=n-r;
    a = factn(n);
    l = factr(r);
    p = factdiff(t);
    // c=b*1.0/a;
    c = a / (p);
    b = a / ((l) * (p));
    printf("No. of permuations is =%f and no. of combinations are= %f", c, b);
    return 0;
}
// factorial

int factn(int l)
{
    int a = 0, d = 1;
    for (a = 0; a <= l; a++)
    {
        if (a == 0)
            d = 1;
        else
            d *= a;
    }
    return (d);
}
int factr(int l)
{
    int a = 0, d = 1;
    for (a = 0; a <= l; a++)
    {
        if (a == 0)
            d = 1;
        else
            d *= a;
    }
    return (d);
}
int factdiff(int l)
{
    int a = 0, d = 1;
    for (a = 0; a <= l; a++)
    {
        if (a == 0)
            d = 1;
        else
            d *= a;
    }
    return (d);
}