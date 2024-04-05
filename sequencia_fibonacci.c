main.c
#include <stdio.h>

int main(){
    int i, sequencia;
    int resultado, anterior, anterior2;
    printf("digite qunatos numeros da sequecia fibonacci voce quer ver: ");
    scanf("%i", &sequencia );


    anterior = 1;
    anterior2 = 1;
    printf("1 - ");

    for(i=0;i<sequencia;i++){
    resultado=anterior + anterior2;
    anterior= anterior2;
    anterior2= resultado;

    printf("%d - %d \n", i, resultado);
    }
     return 0;

}