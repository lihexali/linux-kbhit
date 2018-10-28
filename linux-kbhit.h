
//定义按键们的宏
#define     ESC     "\033"
#define     UP      "\033[A"
#define     DOWN    "\033[B"
#define     LEFT    "\033[D"
#define     RIGHT   "\033[C"
#define     A   "a"

void term_setup(void (*sighandler)(int));
void term_restore();
bool kbhit();
bool keydown(const char* key);