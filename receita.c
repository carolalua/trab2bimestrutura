#include <stdio.h>
#include <stdlib.h>
#include "receita.h"

int main() {
	
	char menu;
	
	printf("LIVRO DE RECEITAS\n");
	printf("\nOpcoes:\n");
	printf("< > - Navegar\n");
	printf("* - Marcar como usada\n");
	printf("a - Alterar\n");
	printf("! - Apagar receita\n");
	printf("+ - Inserir receita\n");
	printf("s - Sair do livro de receitas\n");
	scanf("%c", &menu);
	getchar();
	
	do{
	
		switch(menu) {
			case '<':
				break;
				
			case '>':
				break;
				
			case '*':
				break;
				
			case 'a':
				break;
				
			case '!':
				break;
				
			case '+':
				break;
				
			case 's':
				break;
				
			default:
				printf("Opcao invalida!\n");
				break;
		}
	while(menu != 's');
}
