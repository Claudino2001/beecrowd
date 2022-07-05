//NÃO CONSEGUI

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){

    int i;

    int hrInicio, minInicia, segInico;

    int dia;
    printf("Dia ");
    scanf("%d", &dia);

    char horario[20];
    scanf(" %[^\n]s", horario);

    for(i = 0; horario[i]; i++){
        if(isdigit(horario[i]) && isdigit(horario[i+1])){


        }
    }

    int diaFim;
    printf("Dia ");
    
    scanf("%d", &diaFim);

    char horarioFim[20];
    scanf(" %[^\n]s", horarioFim);


    return 0;
}

            //int num1 = (int)(horario[i] - '0');
            //int num2 = (int)(horario[i+1] - '0');
            //printf("Num1: %d Num2: %d\n", num1, num2);