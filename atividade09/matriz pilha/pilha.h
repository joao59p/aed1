#include <stdio.h>
#include <stdlib.h>


//estruturas
typedef struct No {
    int valor;
    struct No *prox;
} No;

typedef struct Pilha {
    No *topo;
} Pilha;


//criando a pilha
Pilha *criar_pilha() {
    Pilha *temp = (Pilha *)malloc(sizeof(Pilha));
    temp->topo = NULL;
    return temp;
}

//inserindo elementos na pilha
void empilhar(Pilha *p, int valor) {
    No *novo = (No *)malloc(sizeof(No));
    novo->valor = valor;
    novo->prox = p->topo;
    p->topo = novo;
}

//removendo elementos da pilha
int desempilhar(Pilha *p) {
    if (p->topo == NULL) {
        return 0;
    }
    int valor = p->topo->valor;
    No *temp = p->topo;
    p->topo = p->topo->prox;
    free(temp);
    return valor;
}
