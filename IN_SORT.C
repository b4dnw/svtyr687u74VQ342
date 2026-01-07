#include <stdio.h>

void in_sort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int temp = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}

int main() {
    int a[] = {12, 14, 20, 32, 24, 3};
    int n = sizeof(a) / sizeof(a[0]);
    
    in_sort(a, n);
    
    printf("Array after sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}
