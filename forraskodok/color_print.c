#include <stdio.h>
#include "utils.h"

void color_print(color c){
	switch (c){
		case BLACK: 
		printf("%s  %s", BG_BLACK, RESET); 
		break;
		case RED: 
		printf("%s  %s", BG_RED, RESET); 
		break;
		case GREEN: 
		printf("%s  %s", BG_GREEN, RESET); 
		break;
		case YELLOW: 
		printf("%s  %s", BG_YELLOW, RESET); 
		break;
		case BLUE: 
		printf("%s  %s", BG_BLUE, RESET); 
		break;
		case MAGENTA: 
		printf("%s  %s", BG_MAGENTA, RESET); 
		break;
		case CYAN: 
		printf("%s  %s", BG_CYAN, RESET); 
		break;
		case WHITE: 
		printf("%s  %s", BG_WHITE, RESET); 
		break;
		default:
		printf("%s  %s", BG_BLACK, RESET);
	}
}