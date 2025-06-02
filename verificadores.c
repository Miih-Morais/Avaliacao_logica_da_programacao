#include <stdio.h>

int main(){
    
    int n1,n2,n3, m1, m2, m3;
    int nmr_conta, verificador, nmr3, soma;
    int nmr_invertido, multiplicacao, verificador_calculado;
    
    printf("Digite o  número da conta (4 dígitos): ");
    scanf("%d", &nmr_conta);
     if (nmr_conta <1000 || nmr_conta > 9999) {
         printf("Conta inválida, tente novamente.");
     }
    //separa o ultimo digito 
    nmr3 = nmr_conta/10;
    verificador = nmr_conta%10;
    //para inverter o numero 
    n1 = nmr3 %10;
    n2 = nmr3 /10%10;
    n3 = nmr3 /100%10;
    
    nmr_invertido = n1*100 + n2* 10 + n3;
   
   soma = nmr_invertido + nmr3;
   
   // multiplicação
   m1 = soma %10;
   m2 = soma /10%10;
   m3 = soma /100%10;
   multiplicacao = m1 * 1 + m2 * 2 + m3 * 3;
   verificador_calculado = multiplicacao%10;
   if(verificador != verificador_calculado) {
       printf("conta inválida, os números verificadores não são iguais.\n Verificador informado: %d\n Verificador calculado:%d", verificador, verificador_calculado);
   } else {
       printf("Verificador correto\n Bem Vindo Novamente!");
   }
   
   
return 0;
}