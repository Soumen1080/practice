#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int random(int a){
    int i;
    int num = (rand() % (a + 1)); // Generate a random number between 1 and a
    return num;
}
int function (int n){
    int i;
    if (n<=0){
        return 0;

    }
    else{ 
        i = 10;//random(n-1);
        printf("this\n");
        return function(i) + function(n-i-1);
    
    }
}
int main(){
    function(6);
    return 0;
    
}