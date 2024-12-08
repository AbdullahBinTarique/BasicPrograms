#include <stdio.h>
#include <stdlib.h>
int test, d = 0, len, Elements;

int main()
{

    scanf("%d", &test);

    if ((test > 999) || (test < 1))
    {

        exit(0);
    }
    else
    {

        int arr[99999];
        for (test; test > 0; test--)
        {
            scanf("%u", &Elements);
            fflush(stdin);
            if ((Elements < 1) || (Elements > 99999))
                exit(0);
            for (int temp = 0; temp < Elements; temp++)
            {
                scanf("%d", &arr[temp]);
            }
            fflush(stdin);
            for (int a = 0; a < Elements; a++)
            {
                for (int b = 0; b < Elements; b++)
                {
                    if (arr[b] >= arr[a])
                    {
                        int temp = arr[b];
                        arr[b] = arr[a];
                        arr[a] = temp;
                    }
                }
            }
            
for (register int a=0;a<Elements;a++){
for (register int b=a+1;b<Elements;b++){

if(arr[a]==arr[b])
arr[b]=999999999;
}
}
            for (int a = 0; a < Elements; a++)
            {
                for (int b = a; b < Elements; b++)
                {
                    for (register int unsigned c = b; c < Elements; c++)
                    {
                        fflush(stdin);
                        if ((arr[a] + arr[b] < arr[c])||(arr[a]<arr[b]-arr[c])||((arr[c]%2==1)&&(arr[b]%2==1)&&(arr[a]%2==1)))
                            continue;
                            else if((arr[c] + arr[a] < arr[b])||(arr[b] + arr[c] < arr[a]))
                            continue;
                        else
                        {
                            if (arr[a] * arr[a] + arr[b] * arr[b] == arr[c] * arr[c])
                                d++;
                        }
                    }
                }
            }
            printf("%d\n", d);
            d = 0;
        }
    }
    return 0;
}