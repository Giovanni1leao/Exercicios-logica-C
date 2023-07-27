#include<stdlib.h>
#include<stdio.h>
#include<string.h>


typedef char tp_item;

typedef struct tp_no{
struct tp_no *esq;
tp_item info;
struct tp_no *dir;
}tp_no;

typedef tp_no * tp_arvore;

tp_arvore inicializa_arvore(){
return NULL;
}

int arvore_vazia(tp_arvore raiz){
if(raiz==NULL) return 1;
else return 0;
}

tp_no *aloca_no(){ //aloca e retorna endereço
tp_no *no;
no = (tp_no*)malloc(sizeof(tp_no));
return no;
}

int indprefixa;
int busca_infixa(char *inf, int esq, int dir, tp_item info) {
    int i;
    for (i = esq; i <= dir; i++) // percorre o intervalo esq a dir no vetor inf
        if (inf[i] == info) // verifica se o caractere é igual a info
            return 1; // retorna 1 se encontrado
    return -1; // retorna -1 se não encontrado
}

tp_arvore monta_arvore(char pre[], char inf[], int esq, int dir) {
    if (esq > dir)
        return NULL; // se limite esquerdo é maior que limite direito, retorna NULL
    
    tp_no *no = aloca_no(); // aloca um novo nó
    no->info = pre[indprefixa]; // atribui o caractere atual de pre ao nó
    no->dir = no->esq = NULL; // define os filhos esquerdo e direito como NULL
    indprefixa++; // incrementa o índice prefixa
    
    if (esq == dir)
        return no; // se estamos em um nó folha, retorna o nó atual
    
    int indinfixa = busca_infixa(inf, esq, dir, no->info); // busca a posição do caractere atual em inf
    
    no->esq = monta_arvore(pre, inf, esq, indinfixa - 1); // chama recursivamente para criar o filho esquerdo
    no->dir = monta_arvore(pre, inf, indinfixa + 1, dir); // chama recursivamente para criar o filho direito
    
    return no; // retorna o nó atual
}


void pos_ordem(tp_no *p){
if(p!=NULL){
pos_ordem(p->esq);
pos_ordem(p->dir);
printf("%c ", p->info);
}
}

	
int main(){
tp_arvore raiz;
char inf[26];
char pre[26];
raiz= inicializa_arvore();

while(scanf(" %s %s", pre, inf) != EOF){
	indprefixa = 0;
	raiz = monta_arvore(pre, inf, 0, strlen(pre)-1);
	pos_ordem(raiz);
	printf(" \n");
}	
	return 0;

}
