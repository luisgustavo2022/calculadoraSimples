#include <stdio.h>

int main(void) {
  int numero1, numero2;
  int soma, subtracao, multiplicacao, divisao;

  printf ("* Calculadora Modelo **\n");
  printf ("Digite o primeiro numero: ");
  scanf ("%d", &numero1);
      printf("Digite o segundo numero: ");
  scanf ("%d", &numero2);

  soma= numero1 + numero2;
  subtracao= numero1 - numero2;
  multiplicacao= numero1 * numero2;
  divisao=(float) numero1/numero2;

  printf("Numero 1: %d\n", numero1);
  printf ("Numero 2: %d\n", numero2);
  printf ("Soma: %d\n", soma);
  printf ("Subtracao entre numero 1 e numero 2: %d\n", subtracao);
  printf ("Multiplicacao: %d\n", multiplicacao);
  printf ("Divisao entre numero 1 e numero 2: %d\n", divisao);
  
  return 0;}
