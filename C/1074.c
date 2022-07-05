#include <stdio.h>

int main (){
	
	const int t;
	
	scanf ("%d", &t);
	
	int n[t], i;

	for (i = 0; i < t; i++) scanf ("%d", &n[i]);
	
	for (i = 0; i < t; i++){
		if (n[i] == 0) printf ("NULL");
		
		if (n[i] != 0 && n[i]%2 == 0) printf ("EVEN "); 
		if (n[i] != 0 && n[i]%2 != 0) printf ("ODD ");
		
		if (n[i] != 0 && n[i] > 0) printf ("POSITIVE");	
		if (n[i] != 0 && n[i] < 0) printf ("NEGATIVE");
		
		printf ("\n");
	}
	
	return 0;
}
