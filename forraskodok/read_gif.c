#include <stdio.h>
#include "utils.h"

gif read_gif(char gifname[]){
	
	gif jif;
	
	for (int i = 0; i < FRAMECOUNT; i++){
		char framename[BUFFERSIZE];
		sprintf(framename, "%s.bg%d", gifname, i);
		jif.frames[i] = image_read(framename);
	}
	
	return jif;
}