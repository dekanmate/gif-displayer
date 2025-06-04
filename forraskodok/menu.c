#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "utils.h"

void menu(void){
	clear_screen();
	rainbow_line(4);
	printf("Dekan Mate [GQHTIH] - Imperativ Beadando 2024/osz\n\n");
	printf(ITALIC "This would be so much easier if I wasn't color blind!\n\n" RESET);
	printf("Kerlek valassz menupontot:\n\n");
	printf("1 - Kepek fajlbol (image_print)\n2 - Gif fajlbol (print_gif)\n3 - Kilepes\n\n");
	
	rainbow_line(4);
	
	char buffer[BUFFERSIZE];
	int choice;
	bool invalidInput;
	
	
	do {
		invalidInput = false;
		printf("Valasztas [1,2,3] : ");
		fgets(buffer, BUFFERSIZE, stdin);
		if (sscanf(buffer, "%d", &choice) != 1 || choice < 1 || choice > 3){
			invalidInput = true;
			clear_line();
		}
	}while (invalidInput == true);
	
	clear_screen();
	
	switch (choice){
		case 1:
		color_line(5, 6);
		printf("KEPEK FAJLBOL\n\n");
		printf(ITALIC "Dancers emerge from the papaya, and the dancers... are all me!\n\n" RESET);
		char buffer[BUFFERSIZE]; 
		printf("Megtekintheto kepek : ");
		printf(BG_MAGENTA " input " RESET);
		printf(BG_YELLOW " smile " RESET);
		printf(BG_GREEN " tree \n\n" RESET);
		fflush(stdin);
		color_line(5, 6);
		
		do {
			invalidInput = false;
			printf("Megtekinteni kivant kep neve : ");
			fgets(buffer, BUFFERSIZE, stdin);
			buffer[strlen(buffer) - 1] = '\0';
			if (strcmp(buffer, "input") != 0 && strcmp(buffer, "smile") != 0 && strcmp(buffer, "tree") != 0){
				invalidInput = true;
				clear_line();
			}
		}while(invalidInput == true);
		
		image kep = image_read(buffer);
		image_print(kep);
		wait_for_enter();
		break;
	
	
		case 2:
		color_line(5, 5);
		printf("GIF FAJLBOL\n\n");
		printf(ITALIC "Because, Marcel, my sweet, we're going to make a film.\n\n" RESET);
		printf("Megtekintheto gifek : ");
		printf(BG_CYAN " input \n\n" RESET);
		color_line(5, 5);
		
		do {
			invalidInput = false;
			printf("Megtekinteni kivant gif neve : ");
			fgets(buffer, BUFFERSIZE, stdin);
			buffer[strlen(buffer) - 1] = '\0';
			if (strcmp(buffer, "input") != 0){
				invalidInput = true;
				clear_line();
			}
		}while(invalidInput == true);
		
		gif jif = read_gif(buffer);
		print_gif(jif);
		wait_for_enter();
		break;
		
		case 3:
		exit_program();
		break;
	}
}