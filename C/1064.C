#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){
    float x, m, j;
    int n = 6, s=0;
    while (n--){
        scanf("%f", &x);
        if(x > 0.0){
            j += x; 
            s++;
        } 
    }
    m = j / s;
    printf("%i valores positivos\n", s);
    printf("%.1f\n", m);
    return 0;
}