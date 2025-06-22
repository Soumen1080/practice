#include<stdio.h>
#include<string.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
	int arr[10]  = {6,3,8,2,0,1,24,,5,6,0};
	int n = 10;
printf("%d,%d",	bubbleSort(arr[],n));
	
	
}
