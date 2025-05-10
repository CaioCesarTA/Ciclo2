#include <stdio.h>


int main () {
float vetor [100];
float soma = 0;
int i = 0;
while(1){
printf("Digite um numero positivo: ");
    scanf("%f", &vetor[i]);
    if (vetor[i] < 0) {
    break;}
else {soma += vetor[i];
    i++;}
}

printf ("A soma dos numeros positivos e: %f \nFim do programa!", soma);
return 0;
}
