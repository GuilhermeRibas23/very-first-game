#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	printf("\n \n");
	printf("                   ***********************                      \n"); 
	printf("              *********************************                 \n");       
	printf("          *******   *     *       *    *    *******             \n");           
	printf("        *******   ***      **     **     ***   *******          \n");     
	printf("      ******   *****       *********      *****    *****        \n");  
	printf("    ******  ********       *********       ******    *****      \n"); 
	printf("   ****   **********       *********       *********   *****    \n"); 
	printf("  ****  **************    ***********     ************   ****   \n"); 
	printf(" ****  *************************************************  ****  \n"); 
	printf("****  ***************************************************  **** \n"); 
	printf("****  ********************* WELCOME **********************  ****\n"); 
	printf("****  ****************************************************  ****\n"); 
	printf(" ****  ***************************************************  ****\n"); 
	printf("  ****  *******     ****  ***********  ****     *********  **** \n"); 
	printf("   ****   *****      *      *******      *      ********  ****  \n"); 
	printf("    *****   ****             *****             ******   *****   \n"); 
	printf("      *****   **              ***              **    ******     \n"); 
	printf("       ******   *              *              *   *******       \n"); 
	printf("            ********                         *******            \n"); 
	printf("               *********************************                \n"); 
	printf("                   ***********************                      \n"); 
	printf("\n \n");

	int segundos = time(0);
	srand(segundos);

	int numeroGrande = rand();

	int numeroSecreto = numeroGrande % 100;
	int chute;
	int ganhou = 0;
	int tentativas = 1;
	double pontos = 1000;

	while(ganhou == 0){
		printf("Number of attempts: %d \n", tentativas);
		printf(" \n");
		printf("What is your guess? ");
		scanf("%d", &chute);

		if(chute < 0){
			printf("You wrote a negative number. Try again.\n");
			continue;
		}

		int acertou = chute == numeroSecreto;
		
		if(acertou){
			printf("\n \n");
			printf("You did it! You guessed the correct number!\n");
			printf("And your total numbers of attempts were: %d\n", tentativas);
			printf("\n \n");	
			ganhou = 1;
			}else if(chute > numeroSecreto){
				
					printf("More than the secret number! Decrease the number a little.\n");
					printf(" \n");
		}		else{
						printf("Less than the secret number! Increase the number a little.\n");
						printf(" \n");
			}
		tentativas++;

		double pontosPerdidos;
		pontosPerdidos = abs(chute - numeroSecreto) / 2.0;
		pontos = pontos - pontosPerdidos;

	}
	printf("Your final score is: %.1f\n", pontos);
}