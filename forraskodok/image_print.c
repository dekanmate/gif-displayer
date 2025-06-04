#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

void image_print(image kep){
	clear_screen();
	for (int i = 0; i < kep.height; i++){
		for(int j = 0; j < kep.width; j++){
			color_print(kep.matrix[i][j]);
		}
		printf("\n");
	}
	
	for (int i = 0; i < kep.height; i++){
		free(kep.matrix[i]);
	}
	
	free(kep.matrix);
	
}