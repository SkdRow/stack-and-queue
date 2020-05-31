/** Este programa realiza operações com filas e pilhas
* Serão feitas representações em vetores e encadeadas
* para cada uma das estruturas. Os dados armazenados em cada estrutura 
* terá como informações o atendimento de um paciente (data, horario, 
* nome, sintomas e prescrição).
*
* 1) Operações Com Pilha Encadeada
* a)Inserção de um atendimento na Pilha
* b)Remoção de um atendimento na Pilha, mostrando os dados do elemento 
* removido

* 2) Operações Com Fila Encadeada
* a)Inserção de um atendimento na Fila
* b)Remoção de um atendimento na Fila, mostrando os dados do elemento 
* removido

* 3) Operações Com Pilha em Vetor
* a)Inserção de um atendimento na Pilha
* b)Remoção de um atendimento na Pilha, mostrando os dados do elemento 
* removido

* 4) Operações Com Fila em Vetor
* a)Inserção de um atendimento na Fila
* b)Remoção de um atendimento na Fila, mostrando os dados do elemento 
* removido
*
* 5) Finalizar programa
*/

#include <stdio.h>
#include <stdlib.h>
#define TAMPILHA 100
#define TAMFILA 100
#define MALLOC(x) ((x *)) malloc(sizeof(x)))
#define A 'a'
#define B 'b'


/* Declaração das estruturas que armazenam os valores
   que serão inseridos nas filas e pilhas */
typedef struct{
  int dia, mes, ano;
}DATA;

typedef struct{
  int hora, minuto, segundo;
}HORARIO;

typedef struct{
  DATA data;
  HORARIO horario;
  char nome[20], sintomas[100], prescricao[100];
}ATENDIMENTO;
//Fim da declaração

/* */

//Pilha encadeada
struct PilhaE{
  ATENDIMENTO item;
  struct PilhaE *proximo;
}*inicio, *top;

//Fila encadeada
struct FilaE{
  ATENDIMENTO item;
  struct FilaE *proximo;
}*inicio2, *fim;


//Pilha em vetor
struct PilhaV{
  int top;
  ATENDIMENTO itens[TAMPILHA];
}pilha;

//Fila em vetor
struct FilaV{
  int esq, dir;
  ATENDIMENTO itens[TAMFILA];
}fila;

/* protótipo das funções realizadas */
//Operações com pilha encadeada
void inserirPilhaEncadeada();
ATENDIMENTO removerPilhaEncadeada();
int pilhaEVazia();

//Operações com fila encadeada
void inserirFilaEncadeada();
ATENDIMENTO removerFilaEncadeada();
int filaEVazia();

//Operações com pilha em vetor
void inserirPilhaVetor();
ATENDIMENTO removerPilhaVetor();
int pilhaVVazia();

//Operações com fila em vetor
void inserirFilaVetor();
ATENDIMENTO removerFilaVetor();
int filaEVazia();

void lerAtendimento(ATENDIMENTO *);
void atendimentoRemovido(ATENDIMENTO);
int menu();
void subItem(char *);

//Função main
int main(void) {
  //Inicializando as estruturas
  inicio = top = NULL;
  inicio2 = fim = NULL;
  pilha.top = -1;
  //Preciso pensar na implementação por fila.  

  ATENDIMENTO temp;
  int op;
  char op2;
  do{
    switch(menu()){
      case 1:
        subItem(&op2);

        while(op2 == A || op2 == B){
          //inserirPilhaEncadeada();
          if(op2 == A){
            printf("Inserido.\n");
          }
          else{
            printf("Removido.\n");
          }
          subItem(&op2);
        }
        break;
      case 2:
        subItem(&op2);

        while(op2 == A || op2 == B){
          //inserirPilhaEncadeada();
          if(op2 == A){
            printf("Inserido.\n");
          }
          else{
            printf("Removido.\n");
          }
          subItem(&op2);
        }
        break;
      case 3:
        subItem(&op2);

        while(op2 == A || op2 == B){
          //inserirPilhaEncadeada();
          if(op2 == A){
            printf("Inserido.\n");
          }
          else{
            printf("Removido.\n");
          }
          subItem(&op2);
        }

        break;
      case 4:
        subItem(&op2);

        while(op2 == A || op2 == B){
          //inserirPilhaEncadeada();
          if(op2 == A){
            printf("Inserido.\n");
          }
          else{
            printf("Removido.\n");
          }
          subItem(&op2);
        }
        break;
      case 5:
        printf("Finalizando...\n");
        op = 5;
        break;
    }
  }while(op != 5);
  return 0;
} 

void lerAtendimento(ATENDIMENTO *p){

}

int menu(){
  int p;
  printf("\nOPERAÇÕES QUE PODEM SER REALIZADAS\n\n");
  printf("1 - Operações com pilha encadeada. \n");
  printf("2 - Operações com fila encadeada. \n");
  printf("3 - Operações com pilha em vetor. \n");
  printf("4 - Operações com fila em vetor. \n");
  printf("5 - Finalizar. \n");
  printf("Digite a opção desejada: ");
  scanf("%d", &p);
  return p;
}

void subItem(char *s){
  //system("clear");
  do{
    printf("a) Inserir.\n");
    printf("b) Remover.\n");
    printf("c) Voltar.\n");
    scanf(" %c", &(*s));
  }while(*s != 'a' && *s != 'b' && *s != 'c'); 
}


