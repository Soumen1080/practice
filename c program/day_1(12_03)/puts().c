
// both code are same but the second code is more efficient because it removes the newline character if present in the string.


// #include<stdio.h>
// #include<string.h>
// int main() {
// char str[20];
// puts("enter a string");
// fgets(str, sizeof(str), stdin);
// puts("you entered:");
// puts(str);
// return 0;
// }


#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    puts("Enter a string:");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        // Remove newline character if present
        size_t len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
        }
    }
    puts("You entered:");
    puts(str);
    return 0;
}
//output
// Enter a string:
// hello world  
// You entered:
// hello world