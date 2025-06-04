#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

void clear_screen(void){
	printf(TERMINAL_CLEAR TERMINAL_HOME);
	fflush(stdout);
}

void clear_line(void){
	printf(LINE_UP LINE_CLEAR);
	fflush(stdout);
}

void no_mem(void){
	clear_screen();
	color_line(2, 1);
	printf("No memory!\n\n");
	color_line(2, 1);
	exit(1);
}

void no_file(char filename[]){
	clear_screen();
	color_line(7, 1);
	printf("Sikertelen fajlmegnyitas: %s !\n\n", filename);
	color_line(7, 1);
	exit(1);
}

void exit_program(void){
	clear_screen();
	color_line(2, 2);
	printf("Sikeres kilepes!\n\n");
	color_line(2, 2);
	exit(0);
}

void rainbow_line(int rep){
	for (int i = 0; i < rep; i++){
		for (int c = 1; c < 8; c++){
			color_print(c);
		}
	}
	printf("\n\n");
}

void color_line(int rep, int c){
	for (int i = 0; i < rep; i++){
		for (int j = 1; j < 8; j++){
			color_print(c);
		}
	}
	printf("\n\n");
}

void wait_for_enter(void){
	printf("\n[Enter a visszalepeshez]");
	getchar();
	fflush(stdin);
	menu();
}