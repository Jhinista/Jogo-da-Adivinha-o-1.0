#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
	
	setlocale(LC_ALL, "portuguese");
	
	int numero = 25, chute, dificuldade, tentativas;
	char continuar ='s';
	
	do{
	   do{
	printf("***************************************\n");
	printf("* Bem-vindo ao jogo da adivinhação!!! *\n");
	printf("***************************************\n");
	printf("Escolha a dificuldade do jogo\n(1) Fácil-(20 tentativas)\n(2) Médio-(15 tentativas)\n(3) Difícil-(10 tentativas)\n(4) INFERNO-(5 tentativas)");
	printf("\n");
	scanf("%d", &dificuldade);
	system("cls");

	switch(dificuldade){
		case 1:
			tentativas = 20;
			break;
		case 2:
			tentativas = 15;
			break;
		case 3:
			tentativas = 10;
			break;
		case 4:
			tentativas = 5;
			break;
		default:
			printf("Opção Inválida\n\n");
	}
	   }while(dificuldade < 5 || dificuldade > 1);	   
		   
		srand(time(0));
		numero = rand() % 25;

	for(int i=1; i<=tentativas; i++) {
		printf("Qual e o seu chute?:\n ");
		scanf("%d", &chute);
		printf("Seu chute foi %d\n", chute);
			
		if (chute == numero){
			printf("Você acertou!!! :)\n\n");
			break;
		} else if(chute < numero){
			printf("Seu chute foi menor que o numero secreto!\n\n");
		}else if(chute > numero){
			printf("Seu chute foi maior que o numero secreto!\n\n");
		}
	}
		printf("Continuar jogando? (s/n)\n");
			scanf(" %c", &continuar);
			system("cls");
	}while (continuar == 's');
	}
