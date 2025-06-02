// Online C compiler to run C program online
#include <stdio.h>

int main() {

int a1,a2,a3;
int soma;

printf("Escreva quantos funcionários trabalham no primeiro andar, no segundo e no terceiro respectivamente: ");
scanf(" %d %d %d", &a1, &a2, &a3);
    if (a1<0 || a2<0 || a3<0 || a1>1000 || a2>1000 || a3>1000) {
        printf("Erro na quantidade de pessoas por andar\n Quantidade maxima:1000\n Quantidade mínima:0\n Tente novamente.");
 return 0;  
    } else{
soma = (a1+a2+a3)*2;
printf("Considerando que cada pessoa leve 1 minuto para chegar até a máquina e depois ela precisará de mais um minuto para voltar ao seu posto, o total de minutos gastos seriam:%d", soma);
}
    return 0;
}