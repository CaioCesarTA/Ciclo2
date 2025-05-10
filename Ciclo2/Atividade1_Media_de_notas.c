#include <stdio.h>

int main () {

float Notas[3];
float soma = 0;

    printf("Digite a primeira nota: ");
    scanf ("%f", &Notas[0]);
    printf("Digite a segunda nota: ");
    scanf ("%f", &Notas[1]);
    printf("Digite a terceira nota: ");
    scanf ("%f", &Notas[2]);


for (int i = 0; i < 3; i ++){
        soma += Notas[i];
}
float media = soma / 3;

printf("media: %.2f\n", media);
if(media >= 5){
    printf("Aluno aprovado!");
    return 0;
}
else {printf("Aluno reprovado!");
return 0;
    }
}
