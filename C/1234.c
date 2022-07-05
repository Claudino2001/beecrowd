#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char nome[51], var, cont = 1;
    while(scanf(" %[^\n]", &nome) != EOF){    
        int tam = strlen(nome), i=0;
        while(tam--){
            if(!isspace(nome[i]) && (cont % 2 != 0)){
                nome[i] = toupper(nome[i]);
                i++; cont++;
            }
			if(!isspace(nome[i]) && (cont % 2 == 0)){
            	nome[i+1] = tolower(nome[i+1]);
            	i++; cont++;
			}	
        }
        printf("%s\n", nome);
    }
}
