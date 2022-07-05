#include <stdio.h>

int posiFree(int *vet){
    int x = 0, i;
    if(vet[0] == 0 && vet[1] == 0 && vet[2] == 0){
        return -1;
    } else{
        for(i=0; i < 3; i++){
        if(vet[i] == 0) return i;
        }
    }
}

int main(void){
    int M, vet[3], i, j, soma;
    int posi_atu = 1, posi_fut;
    int mov = 0;

    while(1){
        scanf("%d", &M);
        if(M == 0) break;

        for(i = 0; i < M; i++){
            for(j = 0; j < 3; j++){
                scanf("%d", &vet[j]); 
            }
            posi_fut = posiFree(vet);
            if(posi_fut != posi_atu && posi_fut != -1){
                //printf("\tposi_atu: %d\n", posi_atu);
                //printf("\tposi_fut: %d\n", posi_fut);
                soma = (posi_fut - posi_atu);
                if(soma < 0) soma = soma * (-1);
                mov = mov + soma;
                //printf("\nmov: %d\n", mov);
                posi_atu = posi_fut; 
            } 
        }
        printf("%d\n", mov);
        mov = 0;
        posi_atu = 1;
    }
    return 0;
}