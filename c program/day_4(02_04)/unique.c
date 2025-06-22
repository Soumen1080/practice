// #include <stdio.h>

// void printUniqueElements(int arr[], int size) {
//     printf("Unique elements in the array: ");
//     for (int i = 0; i < size; i++) {
//         int isUnique = 1;
//         for (int j = 0; j < size; j++) {
//             if (i != j && arr[i] == arr[j]) {
//                 isUnique = 0;
//                 break;
//             }
//         }
//         if (isUnique) {
//             printf("%d ", arr[i]);
//         }
//     }
//     printf("\n");
// }

// int main() {
//     int arr[] = {1, 2, 3, 2, 4, 5, 1, 6};
//     int size = sizeof(arr) / sizeof(arr[0]);
    
//     printUniqueElements(arr, size);
    
//     return 0;
// }
#include <stdio.h>

// Object-like macro
#define PI 3.14159

// Function-like macro
#define SQUARE(x) (x) * (x)

int main() {
  float radius = 5.0;
  float area = PI * SQUARE(radius);

  printf("The area of the circle is: %f\n", area);

  return 0;
}