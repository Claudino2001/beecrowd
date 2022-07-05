#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef char tp_item;	
	
typedef struct tp_no{
	struct tp_no *esq;
	tp_item info;
	struct tp_no *dir;
} tp_no; 

typedef tp_no * tp_arvore;

tp_arvore inicializa_arvore(){
    return NULL;
}


int arvore_vazia(tp_arvore raiz){
	if(raiz==NULL) return 1;
	else return 0;
}

tp_no *aloca_no(){ //aloca e retorna o endereÃ§o
	tp_no *no;
	no=(tp_no*)malloc(sizeof(tp_no));
	return no;
}

int insere_no(tp_arvore *raiz, tp_item e){
    tp_no *pai=NULL, *novo, *p;  //*p=ponteiro auxiliar
	novo=aloca_no();//cria um novo elemento e coloca o endereÃ§o dele no novo
	if(!novo) return 0; //nÃ£o deu para alocar (novo==null)

	novo->info=e;
	novo->esq=NULL;
	novo->dir=NULL;
		
	p = *raiz;
	while(p!=NULL) 
	{//busca a posiÃ§Ã£o onde serÃ¡ inserido o novo nÃ³
		pai=p;
		if( e < p->info)
			p=p->esq;
		else
			p=p->dir;
	}	
	
	if(pai!=NULL) //Qual ponteiro do pai (esq ou dir) irÃ¡ apontar para o novo nÃ³
	{	
		if ( e < pai->info)
		   pai->esq=novo;
		else 
		   pai->dir=novo;
	}
	else 
		*raiz=novo;

	return 1;	
}

void pre_ordem(tp_no *p){ //imprime os elementos em pre-ordem
	if(p!=NULL){
        printf("\n%c\n",p->info);
		pre_ordem(p->esq);
		pre_ordem(p->dir);
	}
}	
void em_ordem (tp_no *p) {  //imprime os elementos em ordem
    if (p != NULL) {
        em_ordem (p->esq);
        printf("\n%c\n",p->info);
        em_ordem (p->dir);
    }
}

void pos_ordem (tp_no *p) { //imprime os elementos em pÃ³s-ordem 
	if (p != NULL) {
	    pos_ordem (p->esq);
	    pos_ordem (p->dir);
	    printf("%c",p->info);
    }
}

tp_no* busca_no (tp_no *p, tp_item e) {
	while (p != NULL) { 
		if (e < p->info) 
			p = p->esq; 
		else 
			if (e > p->info) 
				p = p->dir; 
			else 
				return (p);
	};
 	return (NULL); 
}
tp_arvore busca_no_rec (tp_arvore p, tp_item e) {
	if (p != NULL) { 
		if (e < p->info) 
			return busca_no_rec(p->esq, e); 
		else 
			if (e > p->info) 
				return busca_no_rec(p->dir, e); 
			else 
				return (p);
	}
	else
 		return (NULL); 
}

int altura_arvore(tp_arvore raiz){
	if(raiz == NULL) return 0;
	int alt_esq = altura_arvore(raiz->esq);
	int alt_dir = altura_arvore(raiz->dir);
	if(alt_esq > alt_dir){
		return alt_esq + 1;
	}else{
		return alt_dir + 1;
	}
}

int qtde_nos(tp_arvore raiz){
	if(raiz == NULL) return 0;
	int tot_esq = qtde_nos(raiz->esq);
	int tot_dir = qtde_nos(raiz->dir);
	return (tot_esq + tot_dir + 1);
}

int p = 0, *mp;

tp_arvore solve(int comecoPre, int comecoIn, int fimIn, char* pre, char* in)
{
	if(comecoPre > strlen(in) || comecoIn > fimIn) return NULL;
	tp_arvore arv = inicializa_arvore();
	insere_no(&arv, pre[comecoPre]);
	int indexIn = mp[((int)arv->info)%26];
	
	p++;
	arv->esq = solve(p, comecoIn, indexIn-1, pre, in);
	arv->dir = solve(p, indexIn+1, fimIn, pre, in);

	return arv;
}

int main(void){
	int i;
    char str1[30];  //PREFIXO   (raíz, sub-árvore esquerda, sub-árvore direita)
    char str2[30];  //INFIXO    (sub-árvore esquerda, raíz, sub-árvore direita)
    char str3[30];  //POSFIXA   (sub-árvore esquerda, sub-árvore direita, raíz)

	tp_arvore arv = inicializa_arvore();

    while(scanf(" %s %s", str1, str2) != EOF){
		p=0;
		mp = (int*)calloc(26, sizeof(int));
		for(i = 0; i < strlen(str1); i++){
			mp[((int)str2[i])%26] = i;
		}
		pos_ordem(solve(0, 0, strlen(str1)-1, str1, str2));
		printf("\n");
    }

    
    return 0;
}