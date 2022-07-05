/**********************************
*	URI Online Judge | 1030       *
*	A Lenda de Flavious Josephus  *
*	Atividade Pontuada            *
*	Aluno: Gabriel Claudino       *
***********************************/

#include <stdio.h>
#include <stdlib.h>
//#include "listase.h"

typedef int tp_item;

typedef struct tp_no{
	tp_item info;
	struct tp_no *prox;
}tp_listase;

tp_listase *inicializa_listase(){
	return NULL;
}

int listase_vazia(tp_listase *lista){
	if(lista==NULL) return 1;
	return 0;
}

tp_listase *aloca_listase(){ 
	tp_listase *novo_no;
	novo_no=(tp_listase*)malloc(sizeof(tp_listase));
	return novo_no;
}

int insere_listase_no_fim(tp_listase **l, tp_item e){
	tp_listase *novo_no, *atu;
	novo_no=aloca_listase();
	if(novo_no == NULL) return 0;
	novo_no->info = e;
	novo_no->prox = NULL;
	if(listase_vazia(*l)){
		*l = novo_no;
	} else{
		atu = *l;
		while(atu->prox!=NULL){
			atu=atu->prox;
		}
		atu->prox=novo_no;
	}
return 1;
}

void imprime_listase(tp_listase *lista){
	tp_listase *atu;
	atu=lista;
	while(atu!=NULL){
		printf("%d\n", atu->info);
		atu=atu->prox;
	}
}

int tamanho_listase(tp_listase *lista){
	int cont=0;
	tp_listase *atu;
	atu = lista;
	while(atu!=NULL){
		cont++;
		atu=atu->prox;
	}
	return cont;
}

 tp_listase *busca_listase(tp_listase *lista, tp_item e){
	tp_listase *atu;
	atu=lista;
	while((atu!=NULL)&&(atu->info!=e)){
		atu=atu->prox;
	}
	if(atu==NULL) return NULL;
	return atu;
 }

int remove_listase(tp_listase **lista, tp_item e){
	tp_listase *ant, *atu;
	atu = *lista;
	ant = NULL;
	while((atu!=NULL)&&(atu->info!=e)){
		ant = ant;
		atu=atu->prox;
	}
	if(atu==NULL) return 0;
	if(ant==NULL){
		*lista =atu->prox;
	}
	else{
		ant->prox=atu->prox;
	}
	free(atu);
	atu=NULL;
	return 1;
}

int main(){
	int n, k, NC, i;
	scanf("%d", &NC);
	tp_listase *lista;
		
	int j=1;
	while(j<=NC){
		scanf("%d", &n); 
		scanf("%d", &k);
		lista = inicializa_listase();	
		for(i=1;i<=n;i++){
			insere_listase_no_fim(&lista, i);
		}
		
		tp_listase *aux = lista;
		while(aux->prox){
			aux=aux->prox;
		}
		aux->prox = lista;
		
		aux = lista;
		while(lista->info != k){
			aux=lista;
			lista=lista->prox;
		}
		
		aux->prox = lista->prox;
		lista = NULL;
		
		while(aux->prox != aux){
			for(i=0; i<k; i++){
				lista=aux;
				aux=aux->prox;
			}
			lista->prox=aux->prox;
			aux->prox=NULL;
			aux = lista;
		}
		printf("Case %d: %d\n",j++, aux->info);
	}
return 0;	
}
