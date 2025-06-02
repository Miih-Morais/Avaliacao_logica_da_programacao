
#include <stdio.h>

int main() {
float valor_bem, valor_depreciado, depreciacao;
int anos;
int i;
float taxa = 0.015;
float soma;

printf("informe o valor do bem a ser depreciado: \n");
scanf("%f",&valor_bem);

printf("informe o período da depreciação em anos: \n");
scanf("%d",&anos);
printf("ano\t valor do bem\t depreciacao\t valor depreciado\n");

    for (i=0; i<anos; i++) {
        printf("%d\t %.2f\t", i+1, valor_bem); 
        depreciacao = valor_bem*taxa;
        valor_depreciado = valor_bem - depreciacao;
        printf("%.2f\t %.2f\n", depreciacao, valor_depreciado);
        valor_bem = valor_depreciado;
        soma = soma + depreciacao;
    }
printf("depreciacao acumulada: %.2f", soma);
    return 0;
}