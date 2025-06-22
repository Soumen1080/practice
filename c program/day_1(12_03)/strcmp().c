#include <stdio.h>
#include <string.h> // Include the correct header for strcmp

int main() {
    char st1[30] = "hello ";
    char st2[30] = "world";

    int result = strcmp(st1, st2);
    printf("%d \n",result);
    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("st1 is less than st2.\n");
    } else {
        printf("st1 is greater than st2.\n");
    }

    return 0;
}


//output
// -15
// st1 is less than st2.