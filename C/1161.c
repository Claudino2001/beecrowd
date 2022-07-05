#include <stdio.h>

typedef long long int lli;

int fat(lli n){
	if(n<=0) return 1;
	return (n * fat(n-1));
}

int main(void){
	
	lli X, Y;
	while(scanf("%d %d", &X, &Y) != EOF){
		printf("%lli\n", fat(X) + fat(Y));
	}
	
	return 0;
}
