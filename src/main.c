#include <stdio.h>

void swap(int *a, int *b) {
        int c = *a;
        *a = *b;
        *b = c;
}

void bubble_sort(int *arr, int len) {
        for (int i=0; i<(len-1); ++i) {
                for (int j=0; j<(len-1-i); ++j) {
                        if (arr[j] > arr[j+1]) {
                                swap(&arr[j], &arr[j+1]);
                        }
                }
        }
}

int main() {
        int nums[100];
        int n;

        int k = 0;
        int max_len = 100;

        while (k < max_len) {
                int rc = scanf("%d", &n);
                if (rc == 1) {
                        nums[k] = n;
                        ++k;
                } else {
                        break;
                }
        }

        bubble_sort(nums, k);

        for (int i=0; i<k; ++i) {
                printf("%d", nums[i]);
                if (i < k-1) {
                        printf(" ");
                }
        }

        printf("\n");

        return 0;
}

