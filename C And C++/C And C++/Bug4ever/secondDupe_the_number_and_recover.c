#include <stdio.h>

void find_missing_and_duplicate(int nums[], int n) {
    int expected_sum = n * (n + 1) / 2;
    int actual_sum = 0;
    int i, j;

    // Calculate actual sum
    for (i = 0; i < n; i++) {
        actual_sum += nums[i];
    }

    // Find the duplicate number
    int duplicate = actual_sum - expected_sum;

    // Find the missing number
    int missing = duplicate + (expected_sum - actual_sum);

    printf("Missing number: %d\n", missing);
    printf("Duplicate number: %d\n", duplicate);
}

int main() {
    int s1[] = {1, 2, 2, 4};
    int n = sizeof(s1) / sizeof(s1[0]);

    find_missing_and_duplicate(s1, n);

    return 0;
}