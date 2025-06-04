#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

image image_read(char imagename[]){
	
	char filename[BUFFERSIZE];
	int len = strlen(imagename);
	if (len >= 4 && imagename[len - 4] != '.'){
		sprintf(filename, "kepek/%s.txt", imagename);
	}else {
		sprintf(filename, "gifek/%s", imagename);
	}
	
	FILE *fp;
	fp = fopen(filename, "r");
	
	
	if (!fp){
		no_file(filename);
	}
	
	image kep;
	
	fscanf(fp, "%d", &kep.width);
	fscanf(fp, "%d", &kep.height);
	
	kep.matrix = (color**)malloc(kep.height * sizeof(color*));
	
	if (!kep.matrix){
		fclose(fp);
		no_mem();
	}
	
	for (int i = 0; i < kep.height; i++){
		kep.matrix[i] = (color*)malloc(kep.width * (sizeof(color)));
		if (!kep.matrix[i]){
			fclose(fp);
			no_mem();
		}
	}
	
	for (int i = 0; i < kep.height; i++) {
        for (int j = 0; j < kep.width; j++) {
			int temp;
            fscanf(fp, "%d", &temp);
			kep.matrix[i][j] = temp;
        }
    }
	
	fclose(fp);
	
	return kep;
}