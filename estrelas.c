// Online C compiler to run C program online
#include <stdio.h>

int main() {
int N;
int i;
int carneiros[i];
     int visitadas[i];

printf("Escreva o número de Estrelas (fazendas): ");
scanf("%d", &N);

 for (i = 0; i < N; i++) {
        printf("Escreva a quantidade de carneiros na fazenda %d: ", i + 1);
        scanf("%d", &carneiros[i]);
        visitadas[i] = 0;
 }

int pos = 0;
    while (pos >= 0 && pos < N) {
        if (carneiros[pos] > 0) {
            carneiros[pos]--;
            visitadas[pos] = 1;
        }

        if (carneiros[pos] % 2 == 0) {
            pos--;
        } else {
            pos++;
        }
    }

    int total_visitadas = 0;
    int carneiros_restantes = 0;

    for (i = 0; i < N; i++) {
        total_visitadas += visitadas[i];
        carneiros_restantes += carneiros[i];
    }

    printf("%d %d\n", total_visitadas, carneiros_restantes);

    return 0;
}



            

