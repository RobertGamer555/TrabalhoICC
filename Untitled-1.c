#include <stdio.h>
#include <string.h>

#define CLIENTES 200
#define VOO 5
#define ESCALAS 5
#define FILAS 40
#define MAX_ASSENTOS 4
#define MAX_TAMANHO 100

void cadastrar_clientes(char nome_clientes[][100], char cpf_clientes[][12], int numero_clientes);
void cadastrar_escala(int codigo_cidade[][MAX_TAMANHO], char nome_cidade[][MAX_TAMANHO], int escala);
// void cadastrar_voo();
// void comprar_passagem_aerea();
// void exibir_voo();
// void exibir_clientes();

int menu()
{
   int opcao;

   printf("------MENU-----\n");
   printf("1 - Cadastrar Cliente\n");
   printf("2 - Cadastrar Escala\n");
   printf("3 - Cadrastar Voo\n");
   printf("4 - Comprar Passagem Aerea\n");
   printf("5 - Exibir Determinado Voo\n");
   printf("6 - Exibir Clientes e suas Passagens\n");
   printf("7 - Sair do programa\n");
   printf("Digite a opcao desejada:\n");
   scanf("%d", &opcao);
   return opcao;
}

void cadastrar_clientes(char nome_clientes[][100], char cpf_clientes[][12], int numero_clientes)
{
   do
   {
      if (numero_clientes >= CLIENTES)
      {
         printf("Limite máximo de clientes atingido!\n");
         return;
      }
      printf("Digite o nome do cliente:\n");
      scanf("%[^\n]", nome_clientes[numero_clientes]);

      printf("Digite o cpf do cliente:\n");
      scanf("\n%s", cpf_clientes[numero_clientes]);


      /***********************************************************
       * Teste de Clientes e Cpf
       */
      printf("Cliente: %s\n", nome_clientes[numero_clientes]);
      printf("CPF: %d\n", cpf_clientes[numero_clientes]);

      numero_clientes++;

   } while (numero_clientes <= CLIENTES);
}
void cadastrar_escala(int codigo_cidade[][MAX_TAMANHO], char nome_cidade[][MAX_TAMANHO], int escala)
{

   do
   {
      if (escala >= ESCALAS)
      {
         printf("Limite máximo de escalas atingido:\n");
         return;
      }
      printf("Digite o codigo da cidade:\n");
      scanf("%d", codigo_cidade);
      printf("Digite o nome da cidade:\n");
      scanf("%[^\n]", nome_cidade); 
      
      escala++;

   } while (escala <= ESCALAS);
   
}

void cadastrar_voo(int codigo_voo[][MAX_TAMANHO],  int quantidade_filas[][FILAS], char cidade_origem[][MAX_TAMANHO], char cidade_destino[][MAX_TAMANHO], char tipo_voo,float valor_passagem)
{
   printf("Digite o codigo do voo:\n");
   scanf("%d", &codigo_voo);
   /*
   ******quantidade de filas
   */
   
   printf("Digite a cidade de origem:\n");
   scanf("%[^\n]", &cidade_origem );

   printf("Digite a cidade de destino:\n");
   scanf("%[^\n]",&cidade_destino);

   printf("Digite o tipo de voo:\n");
   scanf("%c", &tipo_voo);

   printf("Digite o valor da passagem:\n");
   scanf("%f", &valor_passagem);
}
/*
void comprar_passagem_aerea()
{
}*/
/*
void exibir_voo()
{
}*/
/*
void exibir_clientes()
{
}*/

int main()
{

   int nome_clientes[CLIENTES][MAX_TAMANHO], cpf_clientes[CLIENTES][12];
   int numero_clientes = 0;
   int opcao;
   int codigo_voo[VOO];
   char cidade_origem[];
   int quantidade_filas;
   char cidade_destino;
   char tipo_voo;
   char valor_passagem;
   int escala = 0;
   int codigo_cidade;
   int nome_cidade;
   // int i, j, k;

   cadastrar_clientes(nome_clientes, cpf_clientes, numero_clientes);
   cadastrar_escala(codigo_cidade,nome_cidade,escala)
   /*do
   {
      opcao = menu();

      switch (opcao)
      {
      case 1:
         cadastrar_clientes(nome_clientes, cpf_clientes, numero_clientes);
         break;
      case 2:
         //cadastrar_escala(codigo_cidade,nome_cidade, int escala);
         break;
      case 3:
         //cadastrar_voo();
         break;
      case 4:
         //comprar_passagem_aerea();

         break;
      case 5:
         //exibir_voo();
         break;
      case 6:
         //exibir_clientes();
         break;
      case 7:
         printf("Saindo...\n");
         break;
      default:
         printf("Opcao invalida\n");
         break;
      }

   } while (opcao != 7);*/

   return 0;
}

/*#include <stdio.h>
int main()
{
   char str[20];
   scanf("%[^\n]%*c", str);
   printf("%s", str);

   return 0;
}*/
