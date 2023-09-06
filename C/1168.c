#include <stdio.h>
#include <string.h>

int dicionario(char n){
    switch (n)
    {
    case 48:
        return (int)6;
        break;

    case 49:
        return (int)2;
        break;

    case 50:
        return (int)5;
        break;

    case 51:
        return (int)5;
        break;

    case 52:
        return (int)4;
        break;

    case 53:
        return (int)5;
        break;

    case 54:
        return (int)6;
        break;

    case 55:
        return (int)3;
        break;

    case 56:
        return (int)7;
        break;

    case 57:
        return (int)6;
        break;

    default:
        break;
    }
}

int func(char *vet){
    int i, leds = 0;
    for(i=0; i<strlen(vet); i++){
        leds += dicionario(vet[i]);
    }
    return leds;
}

int main(void){

    int cont= 0, leds = 0, i;
    char input[10000];
    scanf("%d", &cont);
    
    while(cont--){
        scanf(" %[^\n]s", input);
        printf("%d leds\n", func(input));
    }
    return 0;
}