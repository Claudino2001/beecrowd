#include <stdio.h>

int main (){
	
	int placarInter, placarGremio;
	int SouN;
	int grenais = 1, empates = 0, inter = 0, gremio = 0;
	
	scanf ("%d %d", &placarInter, &placarGremio);
		if (placarInter > placarGremio) inter++;
		if (placarInter < placarGremio) gremio++;
		if (placarInter == placarGremio) empates++;
	printf ("Novo grenal (1-sim 2-nao)\n");
	scanf ("%d", &SouN);
	
	while (SouN == 1){
		scanf ("%d %d", &placarInter, &placarGremio);
			if (placarInter > placarGremio) inter++;
			if (placarInter < placarGremio) gremio++;
			if (placarInter == placarGremio) empates++;
		printf ("Novo grenal (1-sim 2-nao)\n");
		scanf ("%d", &SouN);
		grenais ++;
	}
	
	printf ("%d grenais\n", grenais);
	printf ("Inter:%d\n", inter);
	printf ("Gremio:%d\n", gremio);
	printf ("Empates:%d\n", empates);
	if (inter > gremio) printf ("Inter venceu mais\n");
	else printf ("Gremio venceu mais\n");
	
	return 0;
}
