#include <stdio.h>

int main() {

	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);

	// Ordenação decrescente
	if (a < b) {
		float temp = a;
		a = b;
		b = temp;
	}

	if (a < c) {
		float temp = a;
		a = c;
		c = temp;
	}

	if (b < c) {
		float temp = b;
		b = c;
		c = temp;
	}

	/**** Classificações ****
	se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
	se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
	se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
	se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
	se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
	se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
	*/

	if(a >= b + c) {
		printf("NAO FORMA TRIANGULO\n");
		return 0;
	}
	
	if(a*a == b*b + c*c) {
		printf("TRIANGULO RETANGULO\n");
	}

	if(a*a > b*b + c*c) {
		printf("TRIANGULO OBTUSANGULO\n");
	}

	if(a*a < b*b + c*c) {
		printf("TRIANGULO ACUTANGULO\n");
	}

	if(a == b && a==c && b==c) {
		printf("TRIANGULO EQUILATERO\n");
	} else if(a==b || a==c || b==c) {
		printf("TRIANGULO ISOSCELES\n");
	}
	
	return 0;
}
