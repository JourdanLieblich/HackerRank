#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int birthdayCakeCandles(int n, int ar_size, int* ar) {
    // Complete this function
    
    int tallest = 0;
    int blown = 0;
    
    for(int i = 0; i < ar_size; i++){
        if(ar[i] > tallest){
            tallest = ar[i];
            blown = 0;
            i = 0;
        }
        if(ar[i] == tallest){
            blown++;
        }
    }
    
    return blown;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = birthdayCakeCandles(n, n, ar);
    printf("%d\n", result);
    return 0;
}
