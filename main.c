#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* inverter(char vet[]){
  int i, aux, fim, tam = strlen(vet);
  char *novo = malloc((tam + 1) * sizeof(char));

  fim = tam - 1;
  for(i = 0; i < tam; i++){
      novo[fim] = vet[i];
      fim--;
  }
    novo[i] = '\0';
    return novo;
}

 int main() {

    char palavra [25] = ("programacao!");
    char *p;

    printf("%s\n", palavra);
    inverter(palavra);
    printf("%s\n", palavra);

    p= inverter(palavra);
    printf("%s\n", p);

    return 0;
 }