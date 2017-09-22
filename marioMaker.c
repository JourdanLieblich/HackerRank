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
    
    int spaceCount;
    for(int i = 1; i <= n; i++){
       spaceCount = n - i;
        for(int j = 0; j < spaceCount; j++){
            printf(" ");
        }
        for(int k = 0; k < i; k++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
