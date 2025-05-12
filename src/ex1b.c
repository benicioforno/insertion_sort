// 1. Faça um programa em C com um array de 20 números inteiros. Atribua valores
// (aleatórios, leitura, sequencial (maior para menor), etc ) ao array. a)
// Implemente uma função para realizar a ordenação por seleção (ordem crescente)
// b) Implemente uma função para realizar a ordenação por inserção (ordem
// crescente)
#include "../include/insertion_sort.h"
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LENGTH 20

int main() {
  int arrayRand[ARRAY_LENGTH];
  int arrayInverted[ARRAY_LENGTH];

  printf("Before array rand: ");
  for (int i = 0; i < ARRAY_LENGTH; i++) {
    arrayRand[i] = rand() % 40;
    printf("%d ", arrayRand[i]);
  }

  InsertionSort(arrayRand, ARRAY_LENGTH);

  printf("\nAfter array rand: ");
  for (int i = 0; i < ARRAY_LENGTH; i++) {
    printf("%d ", arrayRand[i]);
  }

  printf("\nBefore array inverted: ");
  for (int i = 0; i < ARRAY_LENGTH; i++) {
    arrayInverted[i] = ARRAY_LENGTH - i;
    printf("%d ", arrayInverted[i]);
  }

  InsertionSort(arrayInverted, ARRAY_LENGTH);

  printf("\nAfter array inverted: ");
  for (int i = 0; i < ARRAY_LENGTH; i++) {
    printf("%d ", arrayInverted[i]);
  }

  return 0;
}
