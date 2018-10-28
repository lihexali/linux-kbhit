
#include "linux-kbhit.h"
#include "stdio.h"
#include <signal.h>

static sig_atomic_t end = 0;
static void sighandler(int signo)
{
    end = 1;
    printf("good beye!\n");
}

int main()
{
    term_setup(sighandler);

    while (!end) {
        if (kbhit()) {
            if (keydown(ESC))
                printf("This is \"ESC\" button!\n");
            if (keydown(UP))
                printf("This is \"UP\" button!\n");
            if (keydown(DOWN))
                printf("This is \"DOWN\" button!\n");
            if (keydown(LEFT))
                printf("This is \"LEFT\" button!\n");
            if (keydown(RIGHT))
                printf("This is \"RIGHT\" button!\n");
            if (keydown(A))
                printf("This is \"A\" button!\n");
        }
    }

    term_restore();

    return 0;
}
