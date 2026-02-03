#include <stdio.h>

int main() {
    int n, k;
    int comparisons = 0;
    int index = -1;

    // Read array size
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read key to search
    scanf("%d", &k);

    // Linear search
    for (int i = 0; i < n; i++) {
        comparisons++;
        if (arr[i] == k) {
            index = i;
            break;
        }
    }

    // Output result
    if (index != -1) {
        printf("Found at index %d\n", index);
    } else {
        printf("Not Found\n");
    }

    printf("Comparisons = %d\n", comparisons);

    return 0;
}
