#include <stdio.h>
#include <string.h>
#define MAX 100

typedef char
    tp_item;

typedef struct{
    int topo;           
    tp_item item[MAX];
}tp_pilha;

void inicializa_pilha(tp_pilha *p){
    p->topo = -1;
}

int pilha_vazia(tp_pilha *p){       
    if (p->topo == -1) return 1;    
    return 0;                       
}

int pilha_cheia(tp_pilha *p){          
    if (p->topo == MAX -1) return 1;   
    return 0;                           
}

int push (tp_pilha *p, tp_item e){      
    if (pilha_cheia(p)) return 0;       
    p->topo++;                         
    p->item[p->topo]=e;         
    return 1;
}

int pop(tp_pilha *p, tp_item *e){        
    if (pilha_vazia(p)) return 0;        
    *e=p->item[p->topo];                
    p->topo--;                          
    return 1;
}

int top(tp_pilha *p, tp_item *e){       
    if (pilha_vazia(p)) return 0;
    *e=p->item[p->topo];
    return 1;   
}

void imprime_pilha(tp_pilha p){         
    tp_item e;
    printf("Pilha:\n");
    while (!pilha_vazia(&p)){
        pop(&p,&e);
        printf("%c\n",e);
    }
}

int altura_pilha(tp_pilha *p){
    return p->topo+1;
}

int retira_impares(tp_pilha *p){
    if (pilha_vazia(p)) return 0;
    tp_pilha paux;
    inicializa_pilha(&paux);
    tp_item e;
    while (!pilha_vazia(p)){
        pop(p, &e);
        if (e % 2 == 0)
            push(&paux, e);
    }
    while(!pilha_vazia(&paux)){
        pop(&paux, &e);
        push(p, e);
    }
    return 1;
}

int pilhas_iguais (tp_pilha p1, tp_pilha p2){
    if (altura_pilha(&p1) != altura_pilha(&p2)) return 0;
    tp_item e1, e2;
    while (!pilha_vazia(&p1)){
        pop(&p1, &e1);
        pop(&p2, &e2);
        if (e1 != e2) return 0;
    }
    return 1;  
}

void empilhar(tp_pilha *p1, tp_pilha *p2){
    tp_pilha paux;
    inicializa_pilha(&paux);
    tp_item e;
    while(!pilha_vazia(p2)){
        pop(p2, &e);
        push(&paux, e);
    }
    while (!pilha_vazia(&paux)){
        pop(&paux, &e);
        push(p1, e);
    }
}

int main(){
	char diamante[1001], e;
	int qtde, i, j, tam, qtdiam;
	tp_pilha pilha;
	scanf("%d", &qtde);
	for(i=1;i<=qtde;i++){
		scanf(" %[^\n]s", diamante);
		tam = strlen(diamante);
		qtdiam = 0;
		inicializa_pilha(&pilha);
		for(j=0;j<tam;j++){
			switch (diamante[j]){
				case '<': push(&pilha, diamante[j]);
					break;
				case '>': if(pop(&pilha, &e)){
					qtdiam++;
				}
				break;
			}
		}
		printf("%d\n",qtdiam);
	}
	return 0;
}