#include <stdio.h>

int main()
{
    int senhacadastrada, senhainserida;
    int tentativas = 5;

    printf("Digite uma senha de sua preferencia com 4 numeros:\n ");
    scanf("%d", &senhacadastrada);

    for (int tentativa = 1; tentativa <= tentativas; tentativa++)
    {
        printf("Insira sua senha:\n");
        scanf("%d", &senhainserida);

        if (senhainserida == senhacadastrada)
        {
            printf("Senha valida!\n");
            return 0; // identifica que a senha esta correta e encerra por aqui o programa
        }

        else
        {
            printf(" Senha invalida!\n Tentativas restantes: %d\n", tentativas - tentativa);
        }
    }

    printf("Suas tentativas foram esgotadas.\n"); // caso as 5 tentativas forem excedidas essa mensagem será reproduzida

    return 0;
}