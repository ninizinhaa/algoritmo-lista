#include <stdio.h>

int main()
{
    char experiencia;
    double salario, aumento;

    printf("Digite o nivel do funcionario desejado (f1, f2 ou f3):\n ");
    scanf("%c", &experiencia);
    printf("Digite o salario atual do funcionario escolhido:\n ");
    scanf("%lf", &salario);

    double taxa1 = 0.05, taxa2 = 0.07, taxa3 = 0.08;

    if (experiencia == 'f1')
    {
        aumento = salario * taxa1;
    }
    else if (experiencia == 'f2')
    {
        aumento = salario * taxa2;
    }
    else if (experiencia == 'f3')
    {
        aumento = salario * taxa3;
    }
    else
    {
        printf("Nivel de experiencia invalido.\n");
        return 1; // Indicação do código de erro
    }

    double novosalario = salario + aumento; // Cálculo do novo salário

    printf("Novo salario: %.2lf\n", novosalario);

    return 0;
}