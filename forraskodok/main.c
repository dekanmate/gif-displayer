#include "utils.h"

//Fomappaban allva kell lefuttatni:
//gcc -c -W -Wall -Wextra -pedantic .\forraskodok\main.c .\forraskodok\menu.c .\forraskodok\color_print.c .\forraskodok\image_print.c .\forraskodok\image_read.c .\forraskodok\read_gif.c .\forraskodok\print_gif.c .\forraskodok\utils.c
//gcc .\main.o .\menu.o .\utils.o .\color_print.o .\image_print.o .\image_read.o .\print_gif.o .\read_gif.o

int main(void){
	menu();
	return 0;
}