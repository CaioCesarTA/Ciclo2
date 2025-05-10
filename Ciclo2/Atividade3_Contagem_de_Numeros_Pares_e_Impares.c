#include <stdio.h>

int main () {
int vetor[10];
int I, P = 0;
printf("Digite 10 numeros: ");
for (int i = 0; i < 10; i++){
    scanf("%d", &vetor[i]);
    if (vetor[i] % 2 == 0){
        P++;
    }
    else {
        I++;
    }
}

printf("Quantidade de numeros pares: %d \nQuantidade de numeros impares: %d", P, I);
}
