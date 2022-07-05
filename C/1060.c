#include <stdio.h>
 
int main() {
 
    int i, resp = 0;
	float num;
    
    for(i = 0; i<6; i++){
        scanf("%f", &num);
        if(num > 0) resp++;
    }
    
    printf("%d valores positivos\n", resp);
     
     
    return 0;
}
