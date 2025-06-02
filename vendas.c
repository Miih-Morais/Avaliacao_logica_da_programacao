#include <stdio.h>


int main(){
    int quantidade;
    int quantidade_total=0;
    float preco_total=0;
    float preco;
    char repetir;
    
    printf("SISTEMA DE COMPRAS\n Lembrando: \n\t~Caso queira finalizar sua lista de compras digite um numero negativo ou 0 na quantidade dos produtos!\n\t ~Caso tenha algum produto com casas decimais, usar um ponto final invés da vírgula!\n\n");
do{    
    do {
        printf("Informe a quantidade de um produto: ");
        scanf("%d", &quantidade);
            if (quantidade<=0)
            break;
        printf("Informe o valor unitário do produto: ");
        scanf("%f", &preco);
        quantidade_total= quantidade_total + quantidade;
        preco_total= preco_total + quantidade* preco;
    } while (preco>0);
  float media = preco_total/quantidade_total;
   printf("VALOR TOTAL DA COMPRA: R$%.2f\n", preco_total);
   printf("VALOR MEDIO DA COMPRA: R$%.2f\n", media);
   
  int reais = (int)preco_total;
  float centavos = preco_total - reais;
  
  printf("O valor total da compra eh %d reais e %.2f centavos\n", reais, centavos);
  //cedulas
  int c100, c50, c20, c10, c5, c2, c1;
  c100 = reais / 100;
  reais %= 100;
  c50 = reais / 50;
  reais %= 50;
  c20 = reais / 20;
  reais %= 20;
  c10 = reais / 10;
  reais %= 10;
  c5 = reais / 5;
  reais %= 5;
  c2 = reais / 2;
  reais %= 2;
  c1 = reais;
  
  printf("%.2f equivale a:\n", preco_total);
  printf("%d nota(s) de 100\n", c100);
  printf("%d nota(s) de 50\n", c50);
  printf("%d nota(s) de 20\n", c20);
  printf("%d nota(s) de 10\n", c10);
  printf("%d nota(s) de 5\n", c5);
  printf("%d nota(s) de 2\n", c2);
  printf("%d nota(s) de 1\n", c1);
  
  printf("Deseja repetir o programa (S ou N)?  ");
  scanf("%c", &repetir);
  
} while (repetir == 'S' || repetir=='s');
return 0;
}