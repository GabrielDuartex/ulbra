#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, n3, n4, soma;
    printf("Digite um valor: ");
    scanf("%d", &n1);

    printf("Digite um valor: ");
    scanf("%d", &n2);

    printf("Digite um valor: ");
    scanf("%d", &n3);
    
    printf("Digite um valor:");
    scanf("%d", &n4);

    soma =  n1 + n2 + n3 + n4;
    printf("a soma de todos os numeros e %d\n", soma);
    
    return 0;
}