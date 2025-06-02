// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float nota, nota_min;
    int alunos, i;
    int aprovados = 0;
    
    printf("escrevas quantos alunos fizeram o teste: ");
    scanf("%d", &alunos);
    
    if (alunos>1000 || alunos <0) {
        printf("ERRO\n quantidade máxima de alunos: 1000\n quantidade mínima: 1");
    }

    printf("Escreva a nota mínima que esse alunos precisam tirar para serem aprovados: ");
    scanf("%f", &nota_min);
    
    for (i=0; i<alunos; i++){
        printf("coloque a nota do aluno: ");
        scanf("%f", &nota);
            if (nota> nota_min) {
            aprovados = aprovados + 1;
            }
    }
    
    printf("o total de alunos aprovados é: %d", aprovados);
    return 0;
}