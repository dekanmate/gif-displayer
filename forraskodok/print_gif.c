#include <unistd.h>
#include "utils.h"

void print_gif(gif jif){
	for (int i = 0; i < FRAMECOUNT; i++){
		image_print(jif.frames[i]);
		sleep(1);
	}
}