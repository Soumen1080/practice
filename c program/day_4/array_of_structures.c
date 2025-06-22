//#include <stdio.h>
//#include <string.h>
//
//
//int main(){
//	printf("Enter namber of cricketer's :");
//	int n;
//	scanf("%d", n);
//	
//    typedef struct cricket{
//  char name[20];
//  	int age;
//  	int noOfMatches;
//  	
//	  } cricketer;
//  	
//	cricketer arr[n]	
//    for (int i = 0; i < n; i++) {
//        printf("Enter name of cricketer %d: ", i + 1);
//        fgets(arr[i].name, sizeof(arr[i].name), stdin);
//        arr[i].name[strcspn(arr[i].name, "\n")] = 0; // Remove newline from fgets
//
//        printf("Enter age of cricketer %d: ", i + 1);
//        scanf("%d", &arr[i].age);
//
//        printf("Enter number of matches played by cricketer %d: ", i + 1);
//        scanf("%d", &arr[i].noOfMatches);
//
//        getchar(); // Consume newline after scanf
//    }
//
//	
//	
//
//    
//
//  
//    return 0;
//}

#include <stdio.h>
#include <string.h>

typedef struct cricket {
    char name[20];
    int age;
    int noOfMatches;
} cricketer;

int main() {
    printf("Enter number of cricketers: ");
    int n;
    scanf("%d", &n);

    cricketer arr[n];  // Declare an array of cricketers

    getchar(); // Consume newline left by scanf

    for (int i = 0; i < n; i++) {
        printf("Enter name of cricketer %d: ", i + 1);
        fgets(arr[i].name, sizeof(arr[i].name), stdin);
        arr[i].name[strcspn(arr[i].name, "\n")] = 0; // Remove newline from fgets

        printf("Enter age of cricketer %d: ", i + 1);
        scanf("%d", &arr[i].age);

        printf("Enter number of matches played by cricketer %d: ", i + 1);
        scanf("%d", &arr[i].noOfMatches);

        getchar(); // Consume newline after scanf
    }

    // Display the data
    printf("\nCricketer Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Age: %d, Matches: %d\n", arr[i].name, arr[i].age, arr[i].noOfMatches);
    }

    return 0;
}

