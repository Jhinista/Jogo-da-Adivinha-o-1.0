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
	
	printf("***************************************\n");
	printf("* Bem-vindo ao jogo da adivinha��o!!! *\n");
	printf("***************************************\n");
	printf("Escolha a dificuldade do jogo\n(1) F�cil-(20 tentativas)\n(2) M�dio-(15 tentativas)\n(3) Dif�cil-(10 tentativas)\n(4) INFERNO-(5 tentativas)");
	printf("\n");
	scanf("%d", &dificuldade);

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
		default:
			tentativas = 5;
	}
	double pontos = 1000;
		srand(time(0));
		numero = rand() % 25;

	for(int i=1; i<=tentativas; i++) {
		printf("Qual e o seu chute?:\n ");
		scanf("%d", &chute);
		printf("Seu chute foi %d\n", chute);
			
		if (chute == numero){
			printf("Voc� acertou!!! :)\n\n");
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
