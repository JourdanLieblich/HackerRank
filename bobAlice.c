#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* solve(int a0, int a1, int a2, int b0, int b1, int b2, int *result_size){
    // Complete this function
    int aliceScore = 0;
    int bobScore = 0;
    int *retArray;
    
    if(a0>b0){
        aliceScore++;
    } else if(b0>a0) {
        bobScore++;
    }
    if (a1>b1){
        aliceScore++;
    } else if(b1>a1) {
        bobScore++;
    }
    if (a2>b2){
        aliceScore++;
    } else if(b2>a2) {
        bobScore++;
    }
    
    *result_size = 2;
    retArray = malloc(sizeof(int)*2);
    retArray[0] = aliceScore;
    retArray[1] = bobScore;
    return retArray;
        
}

int main() {
    int a0; 
    int a1; 
    int a2; 
    scanf("%d %d %d", &a0, &a1, &a2);
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d", &b0, &b1, &b2);
    int result_size;
    int* result = solve(a0, a1, a2, b0, b1, b2, &result_size);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf(" ");
        }
        printf("%d", result[result_i]);
    }
    puts("");
    

    return 0;
}
