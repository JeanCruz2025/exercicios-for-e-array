/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() 
{
    int numeros[4]; // Declaração do vetor para armazenar 5 números inteiros.

    // Solicita ao usuário que insira 5 números.
    printf("Digite 5 números:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    // Exibe os números inseridos.
    printf("Os números inseridos são:\n");
    for(int i = 4; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }
  
    return 0;
}
