#include <stdio.h>
#include <stdlib.h>
#define MAX 5001
typedef struct nodo
{
    int dig;
    struct nodo* ant;
    struct nodo* sig;
} TNodo;
typedef struct lista
{
    TNodo *ini;
    TNodo *fin;
} TLista;

void listaNueva(TLista* lista)
{
    lista->ini = NULL;
    lista->fin = NULL;
}
void anadirDerecha(TLista* lista, int elem)
{
    TNodo* nodo;
    nodo=(TNodo*)malloc(sizeof(TNodo));
    nodo->dig = elem;
    if (lista->ini == NULL && lista->fin == NULL)
    {
        nodo->ant = NULL;
        nodo->sig = NULL;
        lista->ini = nodo;
        lista->fin = nodo;
    }
    else
    {
        nodo->ant = lista->fin;
        lista->fin->sig = nodo;
        nodo->sig = NULL;
        lista->fin = nodo;
    }
}
void anadirIzquierda(TLista* lista, int elem)
{
    TNodo* nodo;
    nodo = (TNodo*)malloc(sizeof(TNodo));
    nodo->dig = elem;
    if (lista->ini == NULL && lista->fin == NULL)
    {
        nodo->ant = NULL;
        nodo->sig = NULL;
        lista->ini = nodo;
        lista->fin = nodo;
    }
    else
    {
        nodo->ant = NULL;
        nodo->sig = lista->ini;
        lista->ini->ant = nodo;
        lista->ini = nodo;
    }
}
void arreglarLista(TLista* lista)
{
    TNodo *ptrRec;
    ptrRec = lista->fin;
    int acc = 0;
    while (ptrRec != NULL)
    {
        if (ptrRec->dig > 9)
        {
            ptrRec->dig = (ptrRec->dig) - 10 + acc;
            acc = 1;
        }
        else
        {
            ptrRec->dig = ptrRec->dig + acc;
            if (ptrRec->dig > 9)
            {
                ptrRec->dig = 0;
                acc = 1;
            }
            else acc = 0;
        }
        ptrRec = ptrRec->ant;
    }
    if(acc == 1)
        anadirIzquierda(lista,acc);
}
void imprimeLista(TLista* lista)
{
    TNodo* rec;
    rec = lista->ini;
    while (rec != NULL)
    {
        printf("%d",rec->dig);
        rec = rec->sig;
    }
    printf("\n");
}
void suma(TLista* listaSum,TLista *lista1, TLista *lista2)
{
    TNodo *ptrRec1, *ptrRec2;
    ptrRec1 = lista1->fin;
    ptrRec2 = lista2->fin;
    while (ptrRec1 != NULL && ptrRec2 != NULL)
    {
        int num1, num2;
        num1 = ptrRec1->dig;
        num2 = ptrRec2->dig;
        anadirIzquierda(listaSum,num1+num2);
        ptrRec1 = ptrRec1->ant;
        ptrRec2 = ptrRec2->ant;
    }
    while (ptrRec1 != NULL)
    {
        anadirIzquierda(listaSum,ptrRec1->dig);
        ptrRec1 = ptrRec1->ant;
    }
    while (ptrRec2 != NULL)
    {
        anadirIzquierda(listaSum,ptrRec2->dig);
        ptrRec2 = ptrRec2->ant;
    }
    arreglarLista(listaSum);
}
TLista fibo[MAX];
void inicializa(TLista fibo[MAX])
{
    TLista lista1,lista2;
    listaNueva(&lista1);
    listaNueva(&lista2);
    anadirDerecha(&lista1,0);
    fibo[0] = (lista1);
    anadirDerecha(&lista2,1);
    fibo[1] = (lista2);
    int i;
    for(i=2; i<MAX; i++)
    {
        listaNueva(&fibo[i]);
        suma(&fibo[i],&fibo[i-1],&fibo[i-2]);
    }
}
int main(int argc, char** argv)
{
    inicializa(fibo);
    int elem;
    for( ;; )
    {
        if (scanf("%d",&elem) == EOF) break;
        printf("The Fibonnaci number for %d is ",elem);
        imprimeLista(&fibo[elem]);
    }
    return 0;
}
