#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    long int currentMin = LONG_MAX;
    long int currentMax = 0;
    
    long int temp = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(j != i){
                
                temp += arr[j];
                
            }
        }
        //printf("temp: %ld\n currentMin: %ld\n currentMax: %ld\n", temp, currentMin, currentMax);
        if(temp > currentMax){
            currentMax = temp;
        } 
        if (temp < currentMin){
            
            currentMin = temp;
        }
        temp = 0;
    }
    
    printf("%ld %ld", currentMin, currentMax);
    return 0;
}
