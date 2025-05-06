#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 200
#define MAX_VALUE 100

int main() {
    int v[ARRAY_SIZE];
    int aux[MAX_VALUE];
    int i, j, k = 0;

    srand(time(NULL));

    printf("Vetor randomizado:\n");
    for (i = 0; i < ARRAY_SIZE; i++) {
        v[i] = rand() % MAX_VALUE; //Randomiza o valor baseado nop intervalo de 0 a 99
        printf("%d ", v[i]);
    }
    printf("\n");

    for (i = 0; i < MAX_VALUE; i++) {
        aux[i] = 0;
    }

    for (i = 0; i < ARRAY_SIZE; i++) { //Pega a frequencia de cada número
        aux[v[i]]++;
    }

    printf("\n");

    printf("Vetor arrumado:\n");
    for (i = 0; i < MAX_VALUE; i++) {
        for (j = 0; j < aux[i]; j++) {
            if (k < ARRAY_SIZE) {
                v[k++] = i; // Insere o número 'i' 'aux[i]' vezes no vetor v
                printf("%d ", v[k - 1]);
            }
        }
    }
    printf("\n");

    return 0;
}