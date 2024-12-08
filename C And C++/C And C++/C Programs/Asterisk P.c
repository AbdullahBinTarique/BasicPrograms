/*Pattern like Right Angled triangle using '*' */
#include<stdio.h>

int main(){
    int i, j, rows;
    printf("Enter Values of Rows About which You Want to Make The Triangle\n.");
    scanf("%d", &rows);
    for (i = 1 ;i <= rows ; i++){
        for(j = 1;j <= i;j++){
        printf("*");
        }
        printf("\n");
    }
    return 0;
}