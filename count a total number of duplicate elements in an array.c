//Write a program in C to count a total number of duplicate elements in an array.


#include <stdio.h>

int main() {
    int n, i, j, count = 0;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], visited[n];

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0; // Initialize visited array to 0
    }

    // Count duplicate elements
    for (i = 0; i < n; i++) {
        if (visited[i] == 1)  // Skip already counted elements
            continue;

        int freq = 1; // Frequency of current element
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                freq++;
                visited[j] = 1; // Mark duplicate elements as visited
            }
        }

        if (freq > 1) {
            count++; // Increment duplicate count
        }
    }

    // Display the total number of duplicate elements
    printf("Total number of duplicate elements: %d\n", count);

    return 0;
}
