#include <stdio.h>

int main()
{
    int numero, digito, soma = 0;
    printf("Digite um numero inteiro positivo de 0 a 1000000000:\n ");
    scanf("%d", &numero);

    // verificando se o número é divisível por 2, tornando ele par.
    if (numero % 2 == 0)
    {
        printf("O numero digitado e par!\n");
    }

    else
    {
        printf("O numero digitado e impar!\n");
    }

    int copianumero = numero; // preserva o valor inicial do número inserido
    while (numero != 0)
    {
        digito = numero % 10; // seleção do último dígito
        soma += digito;       // digito selecionado para a soma
        numero /= 10;         // remoção do ultimo digito
    }
    printf("A soma dos numeros inseridos (%d) e: %d\n", copianumero, soma);

    return 0;
}