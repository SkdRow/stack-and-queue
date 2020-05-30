/** Este programa realiza operações com filas e pilhas
* Serão feitas representações em vetores e encadeadas
* para cada uma das estruturas. Os dados armazenados  * em cada estrutura terá como informações o atendimento de um paciente.
* 1) Operações Com Pilha Encadeada
* a)Inserção de um atendimento na Pilha
* b)Remoção de um atendimento na Pilha, mostrando os  * dados do elemento removido

* 2) Operações Com Fila Encadeada
* a)Inserção de um atendimento na Fila
* b)Remoção de um atendimento na Fila, mostrando os   * dados do elemento removido

* 3) Operações Com Pilha em Vetor
* a)Inserção de um atendimento na Pilha
* b)Remoção de um atendimento na Pilha, mostrando os   * dados do elemento removido

* 4) Operações Com Fila em Vetor
* a)Inserção de um atendimento na Fila
* b)Remoção de um atendimento na Fila, mostrando os    * dados do elemento removido
*
* 5) Finalizar programa
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
struct Pilha{
  ATENDIMENTO at;
  struct Pilha *proximo;
}*inicio;

//Fila encadeada
//Pilha em vetor
//Fila em vetor

/* protótipo das funções realizadas */
void inserirPilhaEncadeada();
ATENDIMENTO removerPilhaEncadeada();
void inserirFilaEncadeada();
ATENDIMENTO removerFilaEncadeada();
void inserirPilhaVetor();
ATENDIMENTO removerPilhaVetor();
void inserirFilaVetor();
ATENDIMENTO removerFilaVetor();

//inserir atendimento na pilha encadeada

void menu(int *);
void subItem1(char *);
void subItem2(char *);
void subItem3(char *);
void subItem4(char *);

int main(void) {
  inicio = NULL;

  int op;
  char op2;
  do{
    menu(&op);
    switch(op){
      case 1:
        subItem1(&op2);
        break;
      case 2:
        subItem2(&op2);
        break;
      case 3:
        subItem1(&op2);
        break;
      case 4:
        subItem2(&op2);
        break;
      case 5:
        printf("Finalizando...\n");
        break;
    }
  }while(op != 5);
  return 0;
} 

void menu(int *p){
  printf("OPERACOES QUE PODEM SER REALIZADAS:\n\n");
  printf("1 - Operações com pilha encadeada. \n");
  printf("2 - Operações com fila encadeada. \n");
  printf("3 - Operações com pilha em vetor. \n");
  printf("4 - Operações com fila em vetor. \n");
  printf("5 - Finalizar. \n");
  printf("Digite a opção desejada: ");
  scanf("%d", &(*p));
}

void subItem1(char *s){
  do{
    printf("a) Inserir um atendimento na pilha.\n");
    printf("b) Remover um atendimento da pilha.\n");
    scanf(" %c", &(*s));
  }while(*s != 'a' && *s != 'b'); 
}

void subItem2(char *s){
  do{
    printf("a) Inserir um atendimento na fila.\n");
    printf("b) Remover um atendimento da fila.\n");
    scanf(" %c", &(*s));
  }while(*s != 'a' && *s != 'b'); 
}

/*void subItem3(char *s){
  do{
    printf("a) Inserir um atendimento na pilha.\n");
    printf("b) Remover um atendimento da pilha.\n");
    scanf(" %c", &(*s));
  }while(*s != 'a' && *s != 'b'); 
}

void subItem4(char *s){
  do{
    printf("a) Inserir um atendimento na fila.\n");
    printf("b) Remover um atendimento da fila.\n");
    scanf(" %c", &(*s));
  }while(*s != 'a' && *s != 'b'); 
}*/