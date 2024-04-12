#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int const SIZE = 10;
int front = -1;
int rear = -1;
int qtdePasseio = 0;
int qtdeOnibus = 0;
int qtdeCaminhao = 0;
int lucroDoDia = 0;

struct Carro {
	char placa[7];
	char tipo;
};
struct Carro fila[SIZE];

void iniciarFila(){
	front++;
	rear++;
}

bool isEmpty(){
	if(rear <= -1 && front <= -1){
		return true;
	}else{
		return false;
	}
}
bool isFull(){
	if(rear == (SIZE - 1)){
		return true;
	}else{
		return false;
	}
}

void inserirCarro(){
	if(isFull()){
		printf("Fila cheia.");
	}else if(front>=0 && rear>=0){
		int num;
		printf("Digite a placa do carro: ");
		scanf("%s", &fila[rear].placa);
		printf("Escolha o tipo do carro: ");
		printf("1 - PASSEIO");
		printf("2 - ONIBUS");
		printf("3 - CAMINHAO");
		scanf("%d", &num);
		switch(num){
			case 1:
				fila[rear].tipo = 'PASSEIO';
				qtdePasseio++;
				lucroDoDia += 10;
				system("pause");
				break;
			case 2:
				fila[rear].tipo = 'ONIBUS';
				qtdeOnibus++;
				lucroDoDia += 30;
				system("pause");
				break;
			case 3:
				fila[rear].tipo = 'CAMINHAO';
				qtdeCaminhao++;
				lucroDoDia += 50;
				system("pause");
				break;
			default:
				break;
		}
		rear++;
	}else{
		printf("FILA INEXISTENTE");
	}
}

void removerCarro(){
	if(isEmpty()){
		printf("Fila vazia.");
	}else if(front>=0 && rear>=0){
		int q = front + 1;
		fila[front].placa = NULL;
		fila[front].tipo = NULL;
		while(fila[q].placa != NULL && fila[q].tipo != NULL){
			
			fila[q];
		}
		rear--;
	}else{
		printf("FILA INEXISTENTE");
	}
}

void verificarInicio(){
	printf("PLACA: %s\n", fila[front].placa);
	printf("DESCRICAO: %s\n", fila[front].tipo.descricao);
	printf("VALOR DE SERVICO: R$%d\n", fila[front].tipo.valor);
}

void verificarFim(){
	printf("PLACA: %s\n", fila[rear].placa);
	printf("DESCRICAO: %s\n", fila[rear].tipo.descricao);
	printf("VALOR DE SERVICO: R$%d\n", fila[rear].tipo.valor);
}

void menu() {
	printf("SELECIONE UMA OPCAO:\n");
	printf("\n");
	if(front == -1){
		printf("1 - INICIAR FILA.\n");
	}
	printf("2 - INSERIR CARRO.\n");
	printf("3 - REMOVER CARRO.\n");
	printf("4 - MOSTRAR INICIO DA FILA.\n");
	printf("5 - MOSTRAR FIM DA FILA.\n");
	printf("0 - SAIR.\n");
}

int main() {
	int opcao;
	menu();
	scanf("%d", &opcao);
	switch(opcao){
			case 1:
				system("cls");
				iniciarFila();
				system("pause");
				break;
			case 2:
				system("cls");
				inserirCarro();
				system("pause");
				break;
			case 3:
				system("cls");
				removerCarro();
				system("pause");
				break;
			case 4:
				system("cls");
				verificarInicio();
				system("pause");
				break;
			case 5:
				system("cls");
				verificarFim();
				system("pause");
				break;
			default:
				break;
		}
	
	return 0;
}