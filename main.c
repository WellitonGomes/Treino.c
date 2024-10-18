#include <stdio.h>//biblioteca padrão 
//bibliotecas adicionadas para evitar erros
#include <stdlib.h>
#include <string.h>

void LbuffTec(void){
    int c ;
    while ((c = getchar()) != '\n' && c != EOF){
    }
}

void main()
{
    //declaração de variáveis 
    int Valor1, Valor2, Valor3, Valor4, resultado;
    
    //recebendo e atribuindo os valores as variáveis
    printf("Por favor, insira o primeiro valor: ");
    scanf("%d", &Valor1);
    printf("Por favor, insira o segundo valor: ");
    scanf("%d", &Valor2);
    printf("Por favor, insira o terceiro valor: ");
    scanf("%d", &Valor3);
    printf("Por favor, insira o quarto e ultimo valor: ");
    scanf("%d", &Valor4);
    
    //realizando a operação de soma
    resultado = Valor1 + Valor2 + Valor3 + Valor4;
    
    //apresentando o resultado e os valores ao usuário
    printf("O primeiro valor apresentado é: %d\n", Valor1);
    printf("O segundo valor apresentado é: %d\n", Valor2);
    printf("O terceiro valor apresentado é: %d\n", Valor3);
    printf("O quarto valor apresentado é: %d\n", Valor4);
    printf("A soma dos valores apresentados é: %d\n", resultado);
}
