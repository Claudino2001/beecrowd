#include <stdio.h>

int main (){
	int i;
	int N[20];
	int gabriel;
	
	for (i = 0; i < 20; i++){
		scanf ("%d", &N[i]);
	}
		
	for (i = 0; i < 10; i++){
		gabriel = N[i];
		N[i] = N[19 - i];
		N[19 - i] = gabriel;
	}
	
	for (i=0; i<20; i++){
		printf ("N[%d] = %d\n", i, N[i]);
	}
	
	return 0;
}
