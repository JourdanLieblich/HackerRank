#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* timeConversion(char* s) {
    // Complete this function
    if(s[8] == 80){
        //PM case
        if(s[1] != 50 && s[0] != 49){
            s[0] = s[0]+1;
            s[1] = s[1]+2;
        }
        if(s[1] == 50 && s[0] == 48){
            s[0] = s[0]+1;
            s[1] = s[1]+2;
        }
        if(s[1] == 49){
            s[0] = s[0]+1;
            s[1] = s[1]+2;
        }
        s[8] = 32;
        s[9] = 32;    
    } else {
        //AM case
        s[8] = 32;
        s[9] = 32; 
        //Midnight case
        if(s[1] == 50){
            s[0] = 48;
            s[1] = 48;
        }
    }
    
    return s;
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
        int result_size;
char* result = timeConversion(s);
    printf("%s\n", result);
    return 0;
}
