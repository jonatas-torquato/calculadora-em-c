#include <stdio.h>

int menuCalculadora();

int main(){
    int sair = 0;
    int opcao;
    float valor1, valor2, operacao;

    while(sair != 1){
        opcao = menuCalculadora();

        switch(opcao){
            case 0:{
                sair = 1;
                break;
            }
            case 1:{
                printf("\n----- Soma -----\n");
                printf("\nInforme o primeiro valor: ");
                scanf("%f", &valor1);
                printf("\nInforme o segundo valor: ");
                scanf("%f", &valor2);

                operacao = valor1 + valor2;

                printf("\n\nResultado: %f", operacao);
                
                break;
            }
            case 2:{
                printf("\n----- Subtração -----\n");
                printf("\nInforme o primeiro valor: ");
                scanf("%f", &valor1);
                printf("\nInforme o segundo valor: ");
                scanf("%f", &valor2);

                operacao = valor1 - valor2;

                printf("\n\nResultado: %f", operacao);
                
                break;
            }
            case 3:{
                printf("\n----- Divisão -----\n");
                printf("\nInforme o primeiro valor: ");
                scanf("%f", &valor1);
                printf("\nInforme o segundo valor: ");
                scanf("%f", &valor2);

                if(valor1 == 0){
                    operacao = valor1 / valor2;
                    printf("\n\nResultado: %f", operacao);
                } else if(valor2 == 0){
                    printf("Não é possível dividir nenhum número por 0. Retorne ao menu.");
                } else{
                    operacao = valor1 / valor2;
                    printf("\n\nResultado: %f", operacao);
                }

                break;
            }

            case 4:{
                printf("\n----- Multiplicação -----\n");
                printf("\nInforme o primeiro valor: ");
                scanf("%f", &valor1);
                printf("\nInforme o segundo valor: ");
                scanf("%f", &valor2);

                operacao = valor1 * valor2;
                printf("\n\nResultado: %f", operacao);

                break;
            }
            default:{
                printf("Opção Inválida.");
            }
        }
    }
}

int menuCalculadora(){
    int opcao;
    
    printf("\n\n---- CALCULADORA ----\n");
    printf("\nEscolha a operação desejada.\n");
    printf("0 - Sair\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Divisão\n");
    printf("4 - Multiplicação\n");

    scanf("%d", &opcao);

    return opcao;
}