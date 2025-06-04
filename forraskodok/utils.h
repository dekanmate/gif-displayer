#ifndef UTILS_H_INCLUDED
#define UTILS_H_INCLUDED

#define RESET "\033[0m"
#define BG_BLACK "\033[40m"
#define BG_RED "\033[41m"
#define BG_GREEN "\033[42m"
#define BG_YELLOW "\033[43m"
#define BG_BLUE "\033[44m"
#define BG_MAGENTA "\033[45m"
#define BG_CYAN "\033[46m"
#define BG_WHITE "\033[47m"

#define TERMINAL_CLEAR "\033[2J"
#define TERMINAL_HOME "\033[2H"
#define LINE_CLEAR "\033[2K"
#define LINE_UP "\033[A"

#define ITALIC "\033[3m"

#define IMAGESIZE 30
#define FRAMECOUNT 10

#define BUFFERSIZE 51

enum color{
		BLACK,
		RED,
		GREEN,
		YELLOW,
		BLUE,
		MAGENTA,
		CYAN,
		WHITE
};

typedef enum color color;

struct image{
	color **matrix;
	int width;
	int height;
};

typedef struct image image;

struct gif{
	image frames[FRAMECOUNT];
};

typedef struct gif gif;

void wait_for_enter(void);
void menu(void);
void clear_screen(void);
void clear_line(void);
void no_mem(void);
void no_file(char filename[]);
void exit_program(void);
void rainbow_line(int rep);
void color_line(int rep, int c);

void color_print(color c);
image image_read(char imagename[]);
void image_print(image kep);
gif read_gif(char gifname[]);
void print_gif(gif jif);

#endif