#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    int posCount = 0, negCount = 0, zeroCount = 0;
    
    for(int i = 0; i < n; i++){
           if(arr[i] > 0){
               posCount++;
           } else if (arr[i] < 0){
               negCount++;
           } else {
               zeroCount++;
           }
    }
    //printf("%d", posCount);
    double posFrac = (double)posCount/n;
    double negFrac = (double)negCount/n;
    double zeroFrac = (double)zeroCount/n;
    
    printf("%f\n", posFrac);
    printf("%f\n", negFrac);
    printf("%f\n", zeroFrac);
    return 0;
}
