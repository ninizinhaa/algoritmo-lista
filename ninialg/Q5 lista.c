#include <stdio.h>

int main()
{
    int A, B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    if (A == B)
    {
        printf("Os valores lidos são iguais.\n");
    }
    else if (A > B)
    {
        printf("O maior valor é A: %d\n", A);
        if (A % B == 0)
        {
            printf("A é múltiplo de B.\n");
        }
        else
        {
            printf("A não é múltiplo de B.\n");
        }
    }
    else
    {
        printf("O maior valor é B: %d\n", B);
        if (B % A == 0)
        {
            printf("B é múltiplo de A.\n");
        }
        else
        {
            printf("B não é múltiplo de A.\n");
        }
    }

    return 0;
}