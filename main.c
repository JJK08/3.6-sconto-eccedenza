#include <stdio.h>

int main() {
    int numero_prodotti;
    float prezzo_unitario;
    float sconto;
    float importoscont;
    float importotot;
    printf("inserisci il numero di prodotti acquistati: ");
    scanf("%d",&numero_prodotti);
    printf("inserisci il prezzo unitario: ");
    scanf("%f",&prezzo_unitario);
    importotot=numero_prodotti*prezzo_unitario;
    if(importotot>50) {
        sconto=(importotot-50)*0.2+(50-10)*0.1;
    }
    else if(importotot>10){
        sconto=(importotot-10)*0.1;
    }
    importoscont=importotot-sconto;
    printf("importo totale non socnatato:%.2f\n",importotot);
    printf("importo totale scontato:%.2f\n",importoscont);
    printf("importo sconto:%.2f",sconto);
    return 0;
}
