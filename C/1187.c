#include <stdio.h>

int main (){
	char caracter;
	double M[12][12], soma = 0;
	int i, j;
	
	scanf ("%c", &caracter);
	
	for (i=0; i<12; i++){
		for (j=0; j<12; j++){
			scanf ("%lf", &M[i][j]);
		}
	}
//SOMA
	for (i=0; i<(12-1)/2; i++){
		for (j=1+i; j<12-1-i; j++){
			soma += M[i][j];
		}
	}
	
	if (caracter == 'S') printf ("%.1lf\n", soma);
	if (caracter == 'M') printf ("%.1lf\n", soma/ 30);

	return 0;
}
