#include <stdio.h>

int main() {
    int n, duplicateCount = 0;

    // Input the size of the array
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n], visited[n];

    // Input array elements
    printf("Enter the elements of  array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0; // Mark all elements as unvisited initially
    }

    // Count duplicate elements
    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) continue; // Skip if already counted

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark as visited
            }
        }

        if (count > 1) {
            duplicateCount++;
        }
    }

    // Print the result
    printf("The duplicates elements are :", duplicateCount);

    return 0;
}

