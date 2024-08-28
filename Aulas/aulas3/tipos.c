#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() { 
  printf("tamanho do char na memoria = %lu byte(s)\n", sizeof(char));
  printf("tamanho do int na memoria = %lu byte(s)\n", sizeof(int));
  printf("tamanho do float na memoria = %lu byte(s)\n", sizeof(float));
  printf("tamanho do duble na memoria = %lu byte(s)\n", sizeof(double));
  printf("tamanho do voidna memoria = %lu byte(s)\n", sizeof(void));
  printf("\n");
  printf("a faixa de valores do char: de %i a %i\n", CHAR_MIN, CHAR_MAX);
  printf("a faixa de valores do int: de %i a %i\n", INT_MIN, INT_MAX);
  printf("a faixa de valores do float: de %e a %e\n", FLT_MIN, FLT_MAX);
  printf("a faixa de valores do double: de %e a %e\n", DBL_MIN, DBL_MAX);
  printf("\n");
  char tecla= 'A';
  printf("o valor da tecla = %c\n", tecla);
  int idade = 21;
  printf("a idade = %i\n", idade);
  float nota = 8.6f; // 6 casas decimais
  printf("a nota = %f\n", nota);
  double pi = 3.1415926293; // 12 casas decimais
  printf("o valor de pi = %10f\n", pi);
  idade = 50;
  printf("a idade = %i\n", idade);
  printf("\n");
  const float PI = 3.14f;
  printf("o valor de pi = %f\n", PI);
  // PI = 3.141592;  // Deu ruim
  printf("\n");
  printf("tamanho do short int na memoria = %lu byte(s)\n", sizeof(short int));
  printf("tamanho do long int na memoria = %lu byte(s)\n", sizeof(long int));
  printf("tamanho do long double na memoria = %lu byte(s)\n", sizeof(long double));
  printf("\n");
  printf("a faixa de valores do short int: de %i a %i\n", SHRT_MIN, SHRT_MAX);
  printf("a faixa de valores do long double: de %li ate %li\n", LONG_MIN, LONG_MAX);
  printf("a faixa de valores do long int: de %li ate %li\n", LONG_MIN, LONG_MAX);
  
  
  
  
 return 0;
}