#include <stdio.h>

struct produto
{
    int codigo, qnt;
    float valor;
};

    struct produto p1, p2;
    

int main() {

    struct produto p1, p2;
    float total;

    scanf("%d %d %f", &p1.codigo, &p1.qnt, &p1.valor);

    scanf("%d %d %f", &p2.codigo, &p2.qnt, &p2.valor);

    total = p1.qnt * p1.valor + p2.qnt * p2.valor;

    printf("VALOR A PAGAR: R$ %.2f", total);
    printf("\n");


    return 0;
}
