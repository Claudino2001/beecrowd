#include <stdio.h>

int main(void){
	
	float money;
	
	scanf("%f", &money);
	
	if(money >= 0.00 && money <= 400.00){
		printf("Novo salario: %.2f\n", money + ((15.00/100.00)*money));
		printf("Reajuste ganho: %.2f\n", (money + ((15.00/100.00)*money)) - money);
		printf("Em percentual: 15 %%\n");
	}
	
	if(money >= 400.01 && money <= 800.00){
		printf("Novo salario: %.2f\n", money + ((12.00/100.00)*money));
		printf("Reajuste ganho: %.2f\n", (money + ((12.00/100.00)*money)) - money);
		printf("Em percentual: 12 %%\n");
	}

	if(money >= 800.01 && money <= 1200.00){
		printf("Novo salario: %.2f\n", money + ((10.00/100.00)*money));
		printf("Reajuste ganho: %.2f\n", (money + ((10.00/100.00)*money)) - money);
		printf("Em percentual: 10 %%\n");
	}
	
	if(money >= 1200.01 && money <= 2000.00){
		printf("Novo salario: %.2f\n", money + ((7.00/100.00)*money));
		printf("Reajuste ganho: %.2f\n", (money + ((7.00/100.00)*money)) - money);
		printf("Em percentual: 7 %%\n");
	}

	if(money > 2000.00){
		printf("Novo salario: %.2f\n", money + ((4.00/100.00)*money));
		printf("Reajuste ganho: %.2f\n", (money + ((4.00/100.00)*money)) - money);
		printf("Em percentual: 4 %%\n");
	}
	
	return 0;
}
