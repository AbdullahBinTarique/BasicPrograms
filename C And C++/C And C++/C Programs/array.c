#include <stdio.h>
void test(int *N) {
 int i, j;
 printf("\n\nPrint the matrix within the test function:");
 for(i = 0 ; i < 4 ; i++) {
 printf("\n");
 for(j = 0 ; j < 4 ; j++)
 printf("%d ", *(N+ 4*i + j));
 }
 printf("\n");
} 
int main() {
  int nums[4][4], i, j;
  for (i = 0; i < 4; i++)
    for (j = 0; j < 4; j++) 
	   nums[i][j] = i;
  printf("Original Matrix: ");
  for (i = 0; i < 4; i++) {
     printf("\n");
     for (j = 0; j < 4; j++) 
	 printf("%d ", nums[i][j]);
  }
  test(*nums);
}
