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
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          
          scanf("%d",&a[a_i][a_j]);
       }
    }
    
    int sumDiff = 0;
    int primeDiag = 0;
    int seconDiag = 0;
    for(int i = 0; i < n; i++){
       for(int j = 0; j < n; j++){
          if(i == j){
              primeDiag += a[i][j];
              //printf("%d ::", primeDiag);
          }
           if((i + j) == (n-1)){
               seconDiag += a[i][j];
               //printf("%d ''", seconDiag);
           }
       }
    }
    
    sumDiff = primeDiag - seconDiag;
    
    printf("%d", abs(sumDiff));
    return 0;
}
