/*
construa um progama que calcule a some de dois numeros inteiros
*/
#include <stdio.h>

int main() {
    int a, b, soma;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    soma = a + b;
    printf("A soma dos numeros e: %d" , soma);
   printf(" e seno da soma eh %f\n", sin(soma));
return 0;
}
