#include <stdio.h>
#include <string.h>

typedef struct cricketer {
    char name[50];  // Changed from char name to array
    int age;
    int noOfTest;
    int avgRun;
} cricketer;

int main() {
    cricketer arr[20];

    for (int i = 0; i < 20; i++) {
        printf("Enter the age of cricketer: ");
        scanf("%d", &arr[i].age);

        printf("Enter the number of tests played by cricketer: ");
        scanf("%d", &arr[i].noOfTest);

        printf("Enter the average runs of cricketer: ");
        scanf("%d", &arr[i].avgRun);

        getchar(); // **Fix: Consume leftover newline from scanf**

        printf("Enter the name of cricketer: ");
        fgets(arr[i].name, sizeof(arr[i].name), stdin);
        arr[i].name[strcspn(arr[i].name, "\n")] = 0; // Remove newline from fgets
    }

    printf("\n-------------------- Cricketer Details --------------------\n");
    for (int i = 0; i < 20; i++) {
        printf("Name: %s\n", arr[i].name);
        printf("Age: %d\n", arr[i].age);
        printf("Number of Tests: %d\n", arr[i].noOfTest);
        printf("Average Runs: %d\n", arr[i].avgRun);
        printf("----------------------------------------------------------\n");
    }

    return 0;
}

