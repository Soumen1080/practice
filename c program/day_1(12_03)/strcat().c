#include <stdio.h>
#include <string.h>
int main(){
    char st1[30] = "hello ";
    char st2[30] = "world";
    strcat(st1, st2);

    puts(st1);

    return 0;
}

// out put 
// hello world
