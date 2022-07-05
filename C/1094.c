#include <stdio.h>

// GABRIEL CLAUDINO

int main (){
	
	int sapos = 0, ratos = 0, coelhos = 0; 
	int N, num = 0, somaTotal = 0;
	char tipo;
	float pc, pr, ps;
	
	scanf ("%d", &N);
	
	while (N--){
		scanf ("%d %c", &num, &tipo);
		somaTotal += num;
			if (tipo == 'S'){
				sapos += num;
			}
			if (tipo == 'R'){
				ratos += num;
			}
			if (tipo == 'C'){
				coelhos += num;
			}
	}
	
	pc = ((100.0*coelhos) / somaTotal);
	pr = ((100.0*ratos) / somaTotal);
	ps = ((100.0*sapos) / somaTotal);
	
	printf ("Total: %d cobaias\n", somaTotal);
	printf ("Total de coelhos: %d\n", coelhos);
	printf ("Total de ratos: %d\n", ratos);
	printf ("Total de sapos: %d\n", sapos);
	
	printf ("Percentual de coelhos: %.2f %%\n", pc);
	printf ("Percentual de ratos: %.2f %%\n", pr);
	printf ("Percentual de sapos: %.2f %%\n", ps);
	
	return 0;
}
