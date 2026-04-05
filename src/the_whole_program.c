#include <windows.h> //wow, windows
#include <stdio.h>




int main(int argc, char *argv[]) { // no argc for you
    switch (*argv[1] == 0 ? 0 : argv[1][0]) {
        case 0: printf("Seriously, NULL?"); break;
        case 's': printf("shutting down\n"); system("shutdown /s /t 0"); break;
        case 'r': printf("rebooting\n"); system("shutdown /r /t 0"); break;
        case 'b': printf("restarting to BIOS"); system("shutdown /r /fw /t 0"); break;
        default: printf("unknown command, "); printf("%s", argv[1]); break;
    }
}
