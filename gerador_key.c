#include<stdio.h>
#include<stdlib.h>

// Michael Martins - 2018
// Gera uma Sequencia numerica que pode ser salva em um arquivo, ultil para criar Keylist.
// Código de retorno 1, informa que o usuário passou parametros incorretos na linha de comando.

int numeroInicial=1;
int i=1;
int numeroFinal=1;

// Função que faz a contagem
int gerar_lista(numeroInicial, numeroFinal)
{
    for(i=numeroInicial;i<=numeroFinal;i++)
    {
	printf("%08i\n",i);
    }
    return 0;
}

//Menu
int menu_usuario()
{
	printf("Digite o Primeiro Valor: ");
	scanf("%i",&numeroInicial);
	printf("Digite o ultimo Valor a ser Gerado: ");
	scanf("%i",&numeroFinal);
	gerar_lista(numeroInicial, numeroFinal);	
	return 0;
}

// Função principal
int main(int argc,char *argv[])
{
	if (argc > 3 | argc == 2)
    {
        printf("Parametro recebido invalido!!!\n");
        printf("Voce deve informar apenas o numero inicial e o numero final\n\n");
        printf("Exemplo: gerador_key 100 300\n\n");
        exit(1);
	}

	if (argc == 3)
	{
		//Parametros passados corretamente, chamando a funcao
		numeroInicial = atoi(argv[1]); // variavel recebe atoi + argumento "argv"
		numeroFinal = atoi(argv[2]); // variavel recebe atoi + argumento "argv"
		gerar_lista(numeroInicial, numeroFinal);
	}
	if (argc == 1)
	{
		//Usuario nao passou parametros, chamando a interface
		menu_usuario();
	}
return 0;
}