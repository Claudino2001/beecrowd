#include <stdio.h>
#include <string.h>

#define MAX 1000

int main(void){
	
	char exp[MAX];
	int i, tam, abre = 0, fecha = 0, posi1, posi2, j=0;
	
	while(1){
		//printf("1\n");
		scanf(" %[^\n]s", exp);
		if(exp == EOF) break;
		
		tam = strlen(exp);
		for(i=0; i<tam; i++){
			//printf("2\n");
			if(exp[i] == '('){
				abre++;
				posi1 = i;
			} 
			if(exp[i] == ')'){
				fecha++;
				posi2 = i;
			}
			if(posi1>posi2){
				printf("incorrect!\n");
				j = 1;
				break;
			}
		}
		if((abre - fecha) != 0) printf("incorrect\n");
		else printf("correct\n");
		abre = 0, fecha = 0;
	}
	

	
	return 0;
}
